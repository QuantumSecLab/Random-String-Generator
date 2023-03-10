# Random String Generator

## 0 About the Project

It's a tiny C++ program used to generate any given number of secure random strings in any give length.

[Libsodium](https://github.com/jedisct1/libsodium) is used to generate secure random integers so you can use this program to generate strong passwords.

## 1 How to Use It?

1. Method 1

   - Download the source code.
   - Download Visual Studio 2022 and install C++ workload.
   - Open this project via Visual Studio 2022.
   - Adjust build options (Debug/Release, x64/x86) for your platform and build it.
   - Find the output file and execute it.
   - Input the length of string(s).
   - Input the number of string(s) you want.
   - Copy the string(s) manually.
   - Press any key to exit.

2. Method 2

   - Download the pre-built project for your platform.
   - Extract and execute the .exe file.
   - Input the length of string(s).
   - Input the number of string(s) you want.
   - Copy the string(s) manually.
   - Press any key to exit.

   ## 2 Note

   1. Please keep the .exe file and .dll file in the same directory.
   2. The character set for the string is [A-Z]|[a-z]|[0-9].
   3. The version of Libsodium for current project is [1.0.17-stable-msvc (pre-built libraries)](https://download.libsodium.org/libsodium/releases/libsodium-1.0.17-stable-msvc.zip).
   
   ## 3 Supported Platforms
   
   - Windows (x64 & x86)