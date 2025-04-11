// Loops + Conditional Statements mixed question 

// Check between 1 to 50 which number is even or odd and print that number.
// Do this using for loop as well as while loop.


#include <bits/stdc++.h>
using namespace std;

int main () {
    /*
    for (int i = 1; i <= 50; i++){
        if ( i % 2 == 0) {
            cout << i << " is even number" << '\n';
        }
        else {
            cout << i << " is odd number" << '\n';
        }
    }
    */

    // Now using while loop
    int i = 1;
    while (i <= 50){
        if ( i % 2 == 0) {
            cout << i << " is even number" << '\n';
        }
        else {
            cout << i << " is odd number" << '\n';
        }
        i++;
    }
}