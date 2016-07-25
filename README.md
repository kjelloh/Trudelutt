# Trudelutt
A music collaboration application using P2P sharing of created and edited sound files. The application is named after the Swedish word "Trudelutt" which roughly translates to "Short playful tune or melody".

## Version 0.11

* \+ Implemeneted Console fron-end with quit command (no other commans yet)
* \+ Added scripts to generate Visual Studio and MSYS2/Clang++ build environments

## Version 0.1

* \- Initial commit - Application does not do anything useful yet.
* \+ Created project and base source files.
* \+ Basic design of Active (threaded) front-end, core and back-end.

## Project

```
Kjell-Olovs-MacBook-Pro:build kjell-olovhogdahl$ pwd
/Volumes/C/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build
Kjell-Olovs-MacBook-Pro:build kjell-olovhogdahl$ tree -L 2
.
├── Active.cpp                          // Herb sutter inspired Threaded message consumer class
├── Active.h
├── BackEnd.cpp                         // Backend (i.e., interface to platform)
├── BackEnd.h
├── Core.cpp                            // Cross platform core
├── Core.h
├── FrontEnd.cpp                        // Frontend (e.g. Console)
├── FrontEnd.h
├── main.cpp                            // Application entry point
.
├── CMakeLists.txt                      // CMake "project" definition
├── msys2_me.sh                         // Linux shell script to generate msys2 build scripts folder
└── vs_me.cmd                           // DOS shell script to generate Visual Studio IDE folder
...

```

## Build tool-chains

### Builds with CLion 2016.2 and MINGW64 GNU compiler and make

  * In Clion - select <Open Project>
  * Point Clion to ./Trudelutt/build folder
  * Clion will auto-generate IDE files for the project

### Builds with Visual Studio 2015 (update 3)
```
├── build_vs                            // Cmake generated Visua Studio IDE project (See provided vs\_me.cmd script)
│   ├── ALL_BUILD.vcxproj
│   ├── ALL_BUILD.vcxproj.filters
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Trudelutt.sln                   // Open in Visual Studio to build and run executable
│   ├── Trudelutt.vcxproj
│   ├── Trudelutt.vcxproj.filters
│   ├── ZERO_CHECK.vcxproj
│   ├── ZERO_CHECK.vcxproj.filters
│   └── cmake_install.cmake

```
* Open Command Line Prompt in ./Trudelutt folder
* Use Cmake to generate Visual Stuido IDE environment (see provided vs_me.cmd DOS command shell script)

```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>vs_me.cmd

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>REM Use Cmake to generate Visual Studio (VS) build environment

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>SET BUILD_DIR=build_vs

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>if exist build_vs (rmdir /s/q build_vs )

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>mkdir build_vs

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>cd build_vs

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\build_vs>REM use Cmake to generate default build environment (on windows it is Visual Studio)

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\build_vs>cmake ..
-- Building for: Visual Studio 14 2015
-- The C compiler identification is MSVC 19.0.24210.0
-- The CXX compiler identification is MSVC 19.0.24210.0
-- Check for working C compiler using: Visual Studio 14 2015
-- Check for working C compiler using: Visual Studio 14 2015 -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler using: Visual Studio 14 2015
-- Check for working CXX compiler using: Visual Studio 14 2015 -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Looking for pthread.h
-- Looking for pthread.h - not found
-- Found Threads: TRUE
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/build_vs

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\build_vs>cd ..

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>
```

* Open Trudelutt.sln with Visual Studio to build and run

### Builds with clang++ on MSYS2 from cmake-generated build scripts

```
├── build_msys2_clang                   // Cmake generated msys2 build scripts (See provided msys2_me.sh Linux shell script)
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Makefile
│   └── cmake_install.cmake
```
* Generate build environment by open a Linux shell and execute ./msys2_me.sh linux shell script

```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build
$ pwd
/c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build
$ ./msys2_me.sh
#!/bin/bash -v
BUILD_DIR=./build_msys2_clang
if [ -d "$BUILD_DIR" ]
then
        rm -rf "$BUILD_DIR"
fi
mkdir "$BUILD_DIR"
cd "$BUILD_DIR"
cmake .. -G"MSYS Makefiles" -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang
-- The C compiler identification is Clang 3.8.0
-- The CXX compiler identification is Clang 3.8.0
-- Check for working C compiler: C:/msys64/mingw64/bin/clang.exe
-- Check for working C compiler: C:/msys64/mingw64/bin/clang.exe -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: C:/msys64/mingw64/bin/clang++.exe
-- Check for working CXX compiler: C:/msys64/mingw64/bin/clang++.exe -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/build_msys2_clang

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build
$ cd build_msys2_clang/
```
* Invoke Linux shell make tool to build executable

```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/build_msys2_clang
$ make
Scanning dependencies of target Trudelutt
[ 16%] Building CXX object CMakeFiles/Trudelutt.dir/main.cpp.obj
[ 33%] Building CXX object CMakeFiles/Trudelutt.dir/FrontEnd.cpp.obj
[ 50%] Building CXX object CMakeFiles/Trudelutt.dir/Core.cpp.obj
[ 66%] Building CXX object CMakeFiles/Trudelutt.dir/BackEnd.cpp.obj
[ 83%] Building CXX object CMakeFiles/Trudelutt.dir/Active.cpp.obj
[100%] Linking CXX executable Trudelutt.exe
[100%] Built target Trudelutt
```

* Invoke executable Trudelutt. 

```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/build_msys2_clang
$ ./Trudelutt.exe

Trudelutt>Enter "quit" to exit
Trudelutt>
Enter "quit" to exit
Trudelutt>quit

Done!

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/build_msys2_clang
$

```