# FreeMyXe

Xbox 360 executable designed to apply freedom-unlocking patches from xeBuild
to the kernel and hypervisor at runtime. For use with Grimdoomer's
[Xbox360BadUpdate](https://github.com/grimdoomer/Xbox360BadUpdate) hypervisor
exploit.

Nowhere near finished or ready or stable or anything, but might be good enough
for some.

> [!NOTE]
> This is not, and never will be, a "softmod" or CFW - all patches are temporary
> until you reboot!

> [!CAUTION]
> **DO NOT** run any homebrew that modifies any file on or installs anything to
> the NAND, and **DO NOT** try to flash a modified NAND. **YOU WILL BRICK YOUR
> CONSOLE!** I am not responsible for any damage you cause to your own hardware.

> [!WARNING] 
> Completely disconnect from Xbox Live and the internet before running BadUpdate
> and do NOT reconnect, and do NOT run homebrew with an Xbox Live-enabled profile.
> **You could risk a ban!**
> I am not responsible for any Xbox Live console bans or account bans caused by
> using FreeMyXe.

## Features

* Displays CPU key front-and-center. Write that down!
* Allows unsigned content (homebrew, like XeXMenu) to be launched and loaded
  from the dashboard.
* Allows devkit-signed and encrypted XEX files to launch without needing to be
  patched first.
* Lets homebrew access the hypervisor and CPU key as they would be able to on
  a modded console. (useful for Simple 360 NAND Flasher, XeLLLaunch, etc)
* Allows more homebrew be able to be launched without erroring back to
  dashboard.
* Fixes the ring of light / controller syncing bug after using BadUpdate.
* Patches the <30ms ping check for System Link.
* Allows launching XeLL if you have `xell-1f.bin`, `xell-2f.bin` or 
  `xell-gggggg.bin` in the BadUpdatePayload folder.
* Patches USB controller authentication check (a-la "UsbdSecPatch") to let
  certain compatible controllers and adapters work. That's for you, Mario.
* (**beta4 and above only**) Disables connecting to Xbox Live. *You **MUST**
  still disconnect before you start running the exploit!*

### Original Xbox support

The patches made by FreeMyXe are not fully compatible with running Original Xbox
games. Before starting any Original Xbox title, you **must** launch
"OGXboxPrep.xex" first, and after you're done playing Original Xbox games, you
must launch it again to make some 360 homebrew work again. This is included in
FreeMyXe beta4 and above.

## Developers and Contributors

* [Emma / InvoxiPlayGames](https://github.com/InvoxiPlayGames) - lead developer

## Credits and Shoutouts

* ikari's original freeBOOT
* cOz et al. for xeBuild 17559 patches and Dashlaunch
  (see also https://www.xbins.org/nfo.php?file=xboxnfo2430.nfo,
  https://www.xbins.org/nfo.php?file=xboxnfo2431.nfo)
* RGLoader
* Free60 project for [libxenon](https://github.com/Free60Project/libxenon) and
  [XeLL Reloaded](https://github.com/Free60Project/xell-reloaded).
* Octal450 and DrTrinity for an updated Winchester-compatible
  [XeLL](https://github.com/Octal450/xell-reloaded).

(let me know if I got anything wrong!)

### Translations

Thank you to everyone who helped translate FreeMyXe!

* Spanish - by [lexd0g](https://github.com/lexd0g)
* French (Canadian) - by [needmorepaper](https://github.com/needmorepaper)
* Portuguese (Portugal) - by [Animadoria](https://github.com/Animadoria)
* Portuguese (Brazilian) - by [Xyozus](https://github.com/Xyozus)
* Swedish - by [Tozzi89](https://github.com/Tozzi89)
* German - by [tuxuser](https://github.com/tuxuser)
* Italian - by [Razorbacktrack](https://github.com/Razorbacktrack)
* Polish - by [chackAJMCPE](https://github.com/chackAJMCPE) and [DoruDoLasu](https://github.com/DoruDoLasu)
* Russian - by [eversiege](https://github.com/eversiege) and [veselcraft](https://github.com/veselcraft)
* Korean - by [Helloyunho](https://github.com/Helloyunho)
* Chinese (Simplified) - by [Mez0ne](https://github.com/Mez0ne)
* Serbian - by [BlytheScythe](https://github.com/BlytheScythe)
