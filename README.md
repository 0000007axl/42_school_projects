
*This project has been created as part of the 42 curriculum by seramaro*

# **libft.h library**

# Description
This library provides a set of reusable C functions designed to simplify common tasks and improve development efficiency. By centralizing frequently used functionality, it helps reduce code duplication while maintaining clarity, performance, and control typical of C-based projects.

# Instructions
To use the library in your program, you first have to go to the directory of the uncompiled files in your terminal, e.g.:
```bash
cd ~/home/user/libft/
```
Once you are in the folder, compile the library files by using the command line below:
```bash
make
```
This will automate the creation process of the **libft.a** file, which is essentially an archive of static object files (.o files) that you get from compiling the C files in the folder.
Now when you need to use functions from the library, just copy the **libft.a** and **libft.h** files into the folder where the function/program using the library is, and make sure to declare the library header as such before the use:
```C
#include "libft.h"
```
Now you're done and your life is (hopefully) easier... hahaha...

# Ressources
The documentation ressources and references i used to achieve this project are listed below:
- various releases of the Linux man-pages project.
- Portfolio Courses' Youtube channel
- Bro Code's Youtube channel (the goat fr)
- stackoverflow.com
- geeksforgeeks.com

*Regarding the use of AI tools, models available within the VS Code environment—primarily Grok Code and Claude Sonnet—were used as learning aids to help interpret error messages, support documentation efforts, and provide guidance on understanding and preventing previously encountered issues and bugs.*

# Additional notes
This library provides low-level memory manipulation utilities, including byte-level allocation, deallocation, and replacement of memory blocks and arrays. It includes reimplementations of several standard C library functions, as well as additional custom utilities built on top of those functions. The library also provides helper functions for working with data structures such as nodes.
