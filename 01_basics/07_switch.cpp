//Switch Statement

/*Take the day as a number & print the corresponding day 
for 1 print Monday, for 2 print Tuesday and so on*/

#include <iostream>
using namespace std;

int main(){

    int day;            //whatever variable you are taking you have to write that in switch.
    cin >> day;

    switch (day) {
        case 1:
        cout << "Monday";
        break;

        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;

        case 4:
        cout << "Thursday";
        

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "Sunday";
        break;

        default:
        cout << "Invalid" ;
    }

}


// Why we are using break with switch ?
// If we not use break with switch and if we give input as 4 so it will print - 
// everything after case 4 -->  Thursday Friday Saturday Sunday Default.

// That's why we use break after every case.

// C++ is case sensitive so we have to write .... case like this .... not like this Case.....

