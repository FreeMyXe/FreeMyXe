# Compiling FreeMyXe

Compiling FreeMyXe requires:

* Xbox 360 SDK (C compiler, headers, linker tools and basic libraries)
* GNU Make
* Git CLI
* XexTool by xorloser
* *(macOS/Linux only)* Wine

Make sure the following environment variables are set:

* `XEDK` - the install path of the Xbox 360 SDK
* `XEXTOOL` - the path of the folder containing XexTool.exe
* *(macOS/Linux only)* `WINDOWS_SHIM` - the path to the version of Wine you want
  to use

Then you should be able to clone and compile the repo within a Terminal:
```
git clone https://github.com/FreeMyXe/FreeMyXe.git
cd FreeMyXe
make
```
