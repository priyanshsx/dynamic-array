# Dynamic Arrays in C 

I learned C when I was actively pursuing CS50. Since then, I haven't actually put my C skills to work in an actual project. This project serves as a starting point in sharpening my C skills. 

## Project Overview

In high-level languages like Python, lists automatically grow as you add data to them. In standard C, arrays are rigidly fixed in size. This project lifts the hood on how those high-level data structures actually work by building a dynamically resizing array from scratch using direct, manual memory management.

## Core Concepts

*   **Manual Memory Allocation:** Utilizing `<stdlib.h>` to request exact byte sizes from the operating system using `malloc()`.
*   **Dynamic Resizing:** Implementing the logic to monitor array capacity and dynamically double the memory footprint using `realloc()` whenever the array reaches its limit.
*   **Pointer Tracking & Indexing:** Using variables to track both the physical footprint (`capacity`) and the logical index of the next empty slot (`size`) to perfectly position incoming data via `arr[size]`.
*   **Memory Hygiene:** Ensuring zero memory leaks by explicitly returning borrowed memory to the OS using `free()`.

## Architecture & Logic

1.  **The Initial State:** The program starts by allocating a tiny block of memory (capacity for exactly 2 integers).
2.  **The Input Loop:** It enters an infinite `while(1)` loop, utilizing `scanf` to continuously accept integers from the user.
3.  **The Hard Stop Check:** Before saving a new number, it verifies if `size == capacity`.
4.  **The Reallocation Engine:** If the array is full, the program triggers an alarm, doubles the `capacity` variable, and requests a newly sized memory block from the OS to house the expanding dataset.
5.  **The Cleanup:** When the user enters the designated quit command (`-1`), the loop breaks, and the dynamically allocated memory is safely freed.

## Compilation & Usage

To compile and run this project on a Linux machine or via the VS Code integrated terminal:

**1. Compile the code using GCC:**
```bash
gcc dynamic_array.c -o dynamic_array
