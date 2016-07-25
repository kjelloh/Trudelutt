# Trudelutt
A music collaboration application using P2P sharing of created and edited sound files. The application is named after the Swedish word "Trudelutt" which roughly translates to "Short playful tune or melody".

## Project

```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt>tree /F
Folder PATH listing
Volume serial number is D49B-BB89
C:.
│   .gitattributes
│   LICENSE
│   README.md
│
└───build
        Active.cpp              // Herb Sutter inspired Active object (threaded message loop)
        Active.h
        BackEnd.cpp             // Seed for back-end services (i.e., interface to platform)
        BackEnd.h
        CMakeLists.txt
        Core.cpp                // Cross platform core functionality
        Core.h
        FrontEnd.cpp            // Current front-end (i.e., user interface)
        FrontEnd.h
        main.cpp                // Application entry point

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt>
```

## Build tool-chains

### Builds with CLion 2016.2 and MINGW64 GNU compiler and make

  * In Clion - select <Open Project>
  * Point Clion to ./Trudelutt/build folder
  * Clion will auto-generate IDE files for the project

### Builds with Visual Studio 2015 (update 3)

* Open Command Line Prompt in ./Trudelutt folder
* Use Cmake to generate Visual Stuido IDE environment

```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt>cd build

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>mkdir vs_build

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build>cd vs_build

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\vs_build>cmake ..
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
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/kjell-olovhogdahl/Documents/GitHub/Trudelutt/build/vs_build
```

* CMake generates Visual Studio Solution files
```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\vs_build>tree /F
Folder PATH listing
Volume serial number is D49B-BB89
C:.
│   ALL_BUILD.vcxproj
│   ALL_BUILD.vcxproj.filters
│   CMakeCache.txt
│   cmake_install.cmake
│   Trudelutt.sln                   // Open with Visual Studio to build and run
│   Trudelutt.vcxproj
│   Trudelutt.vcxproj.filters
│   ZERO_CHECK.vcxproj
│   ZERO_CHECK.vcxproj.filters
│
... *more*

C:\Users\kjell-olovhogdahl\Documents\GitHub\Trudelutt\build\vs_build>
```

* Open Trudelutt.sln with Visual Studio to build and run

## Version 0.1

* \- Initial commit - Application does not do anything useful yet.
* \+ Created project and base source files.
* \+ Basic design of Active (threaded) front-end, core and back-end.
