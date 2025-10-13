# FreeMyXe

Xbox 360 executable designed to apply freedom-unlocking patches from xeBuild
to the kernel and hypervisor at runtime. For use with Grimdoomer's
[Xbox360BadUpdate](https://github.com/grimdoomer/Xbox360BadUpdate) hypervisor
exploit.

FreeMyXe is designed to be a lightweight set of patches for launching homebrew,
XeLL and LibXenon. **For a more full-featured solution, including plugin support
and higher compatibility with games, use alternatives such as
[XeUnshackle](https://github.com/Byrom90/XeUnshackle).**

FreeMyXe is free software. If you paid for it, either alone or part of a bundle,
you have been scammed!

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
* Allows launching XeLL if you have `xell-1f.bin`, `xell-2f.bin` or 
  `xell-gggggg.bin` in the BadUpdatePayload folder.
* Allows unsigned content (homebrew, like XeXMenu) to be launched and loaded
  from the dashboard.
* Allows automatically launching homebrew after patching if named
  `after_patch.xex` in the BadUpdatePayload folder, or if named `default.xex`
  in a folder named Dashboard inside the BadUpdatePayload folder.
* Disables connecting to Xbox Live. *You **MUST** still disconnect before you
  start running the exploit!*
* An option to automatically patch without a prompt, or automatically boot into
  XeLL.
* Support for internal hard drives and SSDs over 500GB thanks to
  [Bad Storage by Eaton Works](https://fatxplorer.eaton-works.com/bad-storage/).

### Patches

* Lets homebrew access the hypervisor and CPU key as they would be able to on
  a modded console. (useful for Simple 360 NAND Flasher, etc)
* Allows devkit-signed and encrypted XEX files to launch without needing to be
  patched first.
* Fixes the ring of light / controller syncing bug after using BadUpdate.
* Patches the <30ms ping check for System Link.
* Patches USB controller authentication check (a-la "UsbdSecPatch") to let
  certain compatible controllers and adapters work. That's for you, Mario.

### Original Xbox support

The patches made by FreeMyXe are not fully compatible with running Original Xbox
games. Before starting any Original Xbox title, you **must** launch
"OGXboxPrep.xex" first via XeXMenu or similar, and after you're done playing
Original Xbox games, you must launch it again to make some 360 homebrew work
again. This is included in FreeMyXe beta4 and above.

## Developers and Contributors

* [Emma / InvoxiPlayGames](https://github.com/InvoxiPlayGames) - lead developer
* [Swizzy](https://github.com/Swizzy) - maintainer

### Third-Party Components

* [Free60 Project](https://github.com/Free60Project) - XeLL Reloaded
* [Eaton Works](https://eaton-works.com/) - BadStorage

## Copyright

FreeMyXe © Copyright FreeMyXe Team, 2025

Redistribution of FreeMyXe release binaries (as found on GitHub Releases) is
permitted, so long as you are redistributing it for free (free as in gratis) -
it must never require payment.

FreeMyXe is open source. You are permitted to make modified versions for your
own personal use, however if you are sharing with others:

* Your version must be completely free (free as in gratis).
* You must make it obvious that it an unofficial version of FreeMyXe.
* You must credit the FreeMyXe team.
* The source code of your modifications must be available to everyone who
  has your modification.

### Third-Party Components

FreeMyXe includes BadStorage by Eaton Works, licensed under the MIT License.
The full MIT license text can be found in the release README and in
[external/BadStorage_LICENSE.txt](external/BadStorage_LICENSE.txt) in the
FreeMyXe repository. The source code to the BadStorage DLL can be found at
https://github.com/EatonZ/BadStorage.

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
* Byrom90 for help with Freeboot patches.
* Hayzen for the XNotify permissions patch.
* Eaton Works for Bad Storage.

(let me know if I got anything wrong!)

### Translations

Thank you to everyone who helped
[translate FreeMyXe](https://github.com/FreeMyXe/FreeMyXe/issues/9)!

* Spanish - by [lexd0g](https://github.com/lexd0g)
* French (Canadian) - by [needmorepaper](https://github.com/needmorepaper)
* Portuguese (Portugal) - by [Animadoria](https://github.com/Animadoria)
* Portuguese (Brazilian) - by [Xyozus](https://github.com/Xyozus) and [lucmsilva651](https://github.com/lucmsilva651)
* Swedish - by [Tozzi89](https://github.com/Tozzi89)
* German - by [tuxuser](https://github.com/tuxuser)
* Italian - by [Razorbacktrack](https://github.com/Razorbacktrack)
* Polish - by [chackAJMCPE](https://github.com/chackAJMCPE) and [DoruDoLasu](https://github.com/DoruDoLasu)
* Russian - by [eversiege](https://github.com/eversiege) and [veselcraft](https://github.com/veselcraft)
* Korean - by [Helloyunho](https://github.com/Helloyunho)
* Chinese (Simplified) - by [Mez0ne](https://github.com/Mez0ne)
* Japanese - by [MitsuTM](https://github.com/MitsuTM) and [CZ2746isback](https://github.com/CZ2746isback)
