# Dereferencing a Null Pointer in C++

This repository demonstrates a common error in C++: dereferencing a null pointer.  Dereferencing a null pointer (attempting to access the memory location pointed to by a null pointer) leads to undefined behavior, often resulting in a program crash (segmentation fault).  This example showcases the problem and provides a corrected version.

## Bug

The `bug.cpp` file contains code that attempts to dereference a null pointer.  This will likely cause a segmentation fault when executed.

## Solution

The `bugSolution.cpp` file demonstrates the corrected code.  It avoids dereferencing the null pointer by first checking if the pointer is valid before attempting to access the memory it points to.