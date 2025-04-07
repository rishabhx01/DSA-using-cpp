// Concept of 2-D Arrays:

/*
int arr [3][5]; ---> 3 is for Rows and 5 is for columns.
*/


// Strings in cpp:

#include <bits/stdc++.h>
using namespace std;

int main () {

    string name = "Rishabh";

    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;
    cout << name[3] << endl;
    cout << name[4] << endl;

    int len = name.length();  // Get the length of the string

    cout << name[len - 1] <<  endl;  // Print the last character
    cout << len;  // Print the length of the string
}

/*
Every character is stored at an index & the first index is 0 and the last index is s[len - 1].

The length() function returns the length of a string.
*/


/* Arrays in CPP vs JS

1. Type System
C++: Arrays in C++ are statically typed, meaning they store elements of a fixed type (e.g., int, float, char).
JavaScript: Arrays in JavaScript are dynamically typed, meaning they can hold mixed data types within the same array.

2. Size and Resizing
C++: Arrays have a fixed size when declared. You cannot resize them dynamically (except when using dynamic memory allocation with new).
JavaScript: Arrays are dynamically resizable; elements can be added or removed at runtime.

3. Memory Allocation
C++: Arrays can be statically or dynamically allocated using pointers.
JavaScript: Arrays are always dynamically allocated.


4. Built-in Methods
C++: Arrays do not have built-in methods for operations like adding, removing, or searching. You need to manually implement these or use std::vector.
JavaScript: Arrays have many built-in methods like .push(), .pop(), .map(), .filter(), .reduce(), etc.
*/
