# Rickroll

A C++ program that as the title suggests, Rickrolls the user. What did you
expect? Thats all it does. Deal with it.

## Disclaimer (so I don't get blown up by Quake III players)

This software is entended as a harmless prank, and will not damage your system.

## Building

### Windows

Requires MinGW or Visual Studio 2019 compiler installed.

```shell
x86_64-w64-mingw32-g++ rickroll.cpp -o rickroll.exe
```

### Linux/MacOS

GCC installed.

#### Building on Linux

```shell
g++ rickroll.cpp -o rickroll.exe
```

#### Building on MacOS

```shell
g++ rickroll.cpp -framework CoreFoundation -framework ApplicationServices -o rickroll.exe
```