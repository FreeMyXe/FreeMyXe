extern void DbgPrint(const char *s, ...);
extern unsigned int MmGetPhysicalAddress(void *buffer);
extern unsigned int XexGetModuleHandle(PCSTR moduleName, PHANDLE hand);
extern unsigned int XexGetProcedureAddress(HANDLE hand, DWORD dwOrdinal, PVOID Address);
