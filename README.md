# MT26205_oopd-a1
## Overview

This assignment is focused on C++ programming using object-oriented
programming concepts such as classes, objects, C++ operators, strings
and dynamic memory allocation.
I have used assembly language and direct
Linux system calls without using standard C/C++ libraries.
The project is maintained using Git and GitHub.

---

## Assignment Tasks
 
## GitHub Repository Setup
A private GitHub repository named `MT26205_oopd-a1` has been created.
Git is used to maintain the project history through commits and
branches. 

## Basic C++ Program (MT26205_Q2.cpp and build.sh)
A C++ program is created that does nothing except return `0`.
The program is compiled using `g++` options that exclude the standard
library files and Shell script is also used to automate the build process. Output image is attached.

## Name and Age Program (MT26205_NameAge.cpp and build_nameage.sh)
The program asks the user for their name and age then asks the user to confirm the information using
either `y` or `n`.
The program finally displays whether the information was confirmed. Output image is attached.

## Dynamic Number of Names (MT26205_Q4.cpp and build_Q4.sh) (in multi branch)
The program is extended to first ask the user for the number of names
required and then further extended to allow the user to change the number
of names required. Output image is attached. 

## Changing Number of Names (MT26205_Multiname.cpp and build_multiname.sh) (in multi branch)
The program is extended to first ask the user for the number of names
required and then further extended to allow the user to change the number
of names required. Output image is attached.

---

## Building Technique
The programs do not use standard C/C++ libraries.
Classes and objects are used to provide the required functionality.
Direct Linux system calls are used for input and output.
The assembly `.S` file provides the system-call interface between the
C++ program and the Linux kernel.

---

## Usage of assembly language and shell file
The assembly file is built using NASM and the C++ files are compiled
using the required `g++` options.
Shell scripts are used to automate compilation and linking.

---

## Git Branches
The project is maintained using Git branches as required by the assignment.
The dynamic-name implementation is developed in a new branch.
The functionality to change the number of names is added as a new commit on that branch.

---

## Generative AI Disclosure

## 🤖 Generative AI Usage & Prompts
This project was developed with the assistance of Generative AI. AI was used strictly as a **collaborative tutor and debugging assistant** to understand low-level system concepts, resolve compilation errors and manage Git workflows. All Object-Oriented design decisions were reviewed, understood and implemented by me. 

I have categorized log of the key prompts I used during the development of this assignment.

## Conceptual Understanding & Environment Setup
*Used to understand the foundational requirements of the assignment and the underlying C++ mechanics.*
> - "Do I need WSL??" *(Context: Understanding the OS requirements for raw Linux syscalls)*
> - "how to clone repo in vs machine" *(Context: Setting up the local development environment)*
> - "explain this is right or not: `g++ -nostdlib -e main main.cpp -o main.cpp`" *(Context: Understanding compiler flags and avoiding accidental file overwrites)*

## Debugging & Troubleshooting
*Used to diagnose and fix runtime crashes, linker errors and missing file paths.*
> - "basicIO.cpp:1:10: fatal error: ../include/basicIO.h: No such file or directory" *(Context: Resolving relative path issues when moving files between directories)*
> - "build.sh: line 3: unexpected EOF while looking for matching `"`" *(Context: Fixing syntax errors in shell scripts)*

## Git Workflow & Branch Management
*Used to correctly manage the required `main` and `multi-name` branches.*
> - "delete mode 100644... git push origin main... Everything up-to-date... i have committed but not updating in github" *(Context: Debugging a branch mismatch where commits were made to `multi-name` but pushed to `main`)*
> - "push on git command" *(Context: Clarifying the exact syntax to push a specific feature branch)*

## Key Takeaways from AI Collaboration
Through these interactions, I gained a much deeper understanding of:
1. How the C++ compiler interacts with Assembly (Name Mangling & `extern "C"`).
2. How to safely manage memory and prevent buffer overflows without standard libraries.
3. The importance of Git branch management when working on isolated features.