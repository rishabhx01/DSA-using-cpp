// string vs getline

#include <bits/stdc++.h>
using namespace std;

/*
int main(){
    string s;
    cin >> s;                            // Input - hey Rishabh
    cout << s;                           // Output - hey
    return 0;
}
*/

// getline

int main () {
    string s;
    getline (cin, s);                   // Input - hey Rishabh
    cout << s;                          // Output - hey Rishabh
    return 0; 
}


/*
So here if you are saying string, then what happens is it only pickup anything before the space
and after the space it consider as a new string.
In case you want to take everything you have to use getline.
*/