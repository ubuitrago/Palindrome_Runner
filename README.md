# Palindrome Checker

***

## Description
Written in C++, this project is a palindrome checker tool that validates if passed in alphanumeric strings are indeed palindromes. 

## Dependencies
Out the box, this tool is packaged in an executable format meant to run in Linux environments. To compile on your own, the latest version of the G++ compiler is reccomended. Debian version 11.2.0 was used during development. The best practice is to udpate your package manager and then install g++:
>sudo apt-get update
>sudo apt-get install g++
You will get a message: “Do you want to continue?” Press ‘y’ in order to continue.

## Installation
Make sure to have read the Dependencies section above before installing.
>Ensure your machine's SSH-key within Gitlab is up to date and present
>Git clone the repo 


## Usage
There is a ready-to-use executable within the "build" folder.
>./launch_checker
Pass input into the program and it will return a True/False statement about whether or note it is a palindrome. Only ALPHANUMERIC input is considered valid (a-z, A-Z, 0-9), anything else will be error handled and cause the program to output an error message. It will then ask for new input. It will loop until the "exit" command is entered. Below are some examples of valid input:

>abcdbca
>a
>1234321
>ASDFDSA
>asDFdsa
>AS3sa

## Building
To build, run "make clean" within the root of the project directory, and then run "make". This will produce an executable "palindrome_launcher" within the "build" folder along with its object files. For the test plan, navigate to the "tests" directory and again run "make clean". Then, run "make" and it will produce the executable within the same working directory. 

## Improvements
A unit testing framework such as Doctest would have been the ideal way to validate this tool's core functionality. But, given the nature of the assignment and time constraint, an added layer of complexity was not seen as necessary to ensuring a robust palindrome checker. In the future, such framework would replace the current file "test_plan.cpp".

## Authors and acknowledgment
Uriel Buitrago

## License
Free to use. 

## Project status
This project was a completed requriement as part of an interview process with Plus One Robotics. Future development of this project has not been confirmed. 
