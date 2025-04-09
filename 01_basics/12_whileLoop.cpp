// while loop - The while loop, loops through a block of code as long as a specified condition is true.

// Print every alternate number in between 1 to 50. 
// Like - 1, 3, 5, 7, 9 ..... and so on.
// Do this using while loop.

#include <bits/stdc++.h>
using namespace std;

int main () {
    int i = 1;                          // initialization
    while (i <= 50)                     // condition
    {
        cout << i << endl;              // printing
        i = i + 2;                      // incrementation
    }
    return 0;
}