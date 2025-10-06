#include <xtl.h>
#include <stdint.h>
#include <string.h>
#include "xboxkrnl.h"

uint64_t __declspec(naked) HvxGetVersions(uint32_t magic, int op, uint64_t source, uint64_t dest, uint64_t length) {
    __asm
    {
        li r0, 0x0
        sc
        blr
    }
}

uint64_t GetHVTargetAddress(uint32_t address)
{
    if (address >= 0x00000 && address < 0x10000)
        return 0x8000010000000000 |  address;
    else if (address >= 0x10000 && address < 0x20000)
        return 0x8000010200000000 |  address;
    else if (address >= 0x20000 && address < 0x30000)
        return 0x8000010400000000 |  address;
    else if (address >= 0x30000 && address < 0x40000)
        return 0x8000010600000000 |  address;
    else
        return 0x8000030000000000 |  address;
}

void ReadHypervisor(void *userland_data, uint32_t hv_address, size_t length)
{
    // get the hypervisor address to patch
    uint64_t hv_target = GetHVTargetAddress(hv_address);
    // allocate some physical memory for the memcpy to copy to
    uint8_t *data_buf = (uint8_t *)XPhysicalAlloc(0x1000, MAXULONG_PTR, 0, PAGE_READWRITE);
    uint64_t data_addr = 0x8000000000000000 | MmGetPhysicalAddress(data_buf);
    // decide which syscall to use
    HvxGetVersions(0x72627472, 5, hv_target, data_addr, length);
    memcpy(userland_data, data_buf, length);
    XPhysicalFree(data_buf);
}

typedef void (*XNotifyQueueUI_t)(uint32_t type, uint32_t userIndex, uint64_t areas, const wchar_t *displayText, void *pContextData);
XNotifyQueueUI_t XNotifyQueueUI = NULL;

void ResolveXNotify()
{
    HANDLE handle = NULL;
    uint32_t addr = 0;
    XexGetModuleHandle("xam.xex", &handle);
    if (handle == NULL)
        return;
    XexGetProcedureAddress(handle, 656, &addr);
    if (addr != 0)
        XNotifyQueueUI = (XNotifyQueueUI_t)addr;
}

void NotificationPopup(wchar_t *text)
{
    if (XNotifyQueueUI != NULL)
    {
        XNotifyQueueUI(3, 0, XNOTIFY_SYSTEM, text, NULL);
    }
}

void __cdecl main()
{
    uint32_t test_inst = 0;

    ResolveXNotify();

    ReadHypervisor(&test_inst, 0x154C, sizeof(uint32_t));
    DbgPrint("Instruction = %08x\n", test_inst);

    if (test_inst == 0x38800007)
    {
        DbgPrint("Disabling memory protections...\n");
        // disable memory protections
        HvxGetVersions(0x72627472, 3, 0, 0, 0);
        NotificationPopup(L"Original Xbox games ready!\nSome homebrew may crash.");
    }
    else
    {
        DbgPrint("Re-enabling memory protections...\n");
        // re-enable memory protections
        HvxGetVersions(0x72627472, 2, 0, 0, 0);
        NotificationPopup(L"Protection disabled!\nOriginal Xbox games will crash.");
    }
}
