// Print every alternate number in between 1 to 50. 
// Like - 1, 3, 5, 7, 9 ..... and so on.
// Do this using for loop.

#include <bits/stdc++.h>
using namespace std;

int main () {
    for ( int i = 1; i <= 50; i = i + 2) {
        cout << i << endl;
    }
    return 0;
}