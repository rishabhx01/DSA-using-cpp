// do while loop -> it is a variant of the while loop.
// This loop will execute the code block once, before checking if the condition is true.

// do while means first do then check. so the line of code is executed minimum of 1 time in do-while loop.

// Print numbers from 1 to N
// Que -  Take an integer N from the user and print numbers from 1 to N using a do-while loop.

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    int i = 1;
    cout << "Enter your number: ";
    cin >> N;

    do
    {
        cout << i << " ";
        i = i + 1;
    } while (i <= N);

    return 0;
}



/*
while Loop:
The condition is checked first; if it's true, the loop executes.
If the condition is false from the start, the loop will never run.

do...while Loop
The code executes first, even if the condition is false.
Then, the condition is checked. If true, the loop continues; otherwise, it stops.
This will run at least once!
*/