// Loops
// Loops can execute a block of code as long as a specified condition is reached or true.

// Types of loops:
// 1. for loop
// 2. while loop
// 3. do-while loop


// for loop --> when you know the exactly how many times you want to loop through a block of code, use the for loop.
// for loop says --> same line of code why do you want to write again and again. I'll write for you.


// Que. Print your name 10 times.

#include <bits/stdc++.h>
using namespace std;

int main () {
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;
    cout << "Rishabh is my name." << endl;



    // Now lets do this with for loop
    for (int i = 1; i <= 10 ; i++){
        cout << "Rishabh is my name using for loop" << endl;
    }

}

// Syntax of for loop
/*
for (initialization; condition; increment) {
        cout << printing;
}
*/

/*
first step is initialization
second step is condition checking
third step is printing
fourth step is incrementation
*/

