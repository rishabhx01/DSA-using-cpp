// Conditional Statements

// Types
// 1. if statement
// 2. if - else statement
// 3. if - else if - else statement
// 4. switch statement


//if-else statement
//WAP that takes an input of age and prints if you are adult or not.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age >= 18){
        cout << "You are an adult" << endl;
    }
    else   {
        cout << "You are not an adult" << endl;
    }
    return 0;
}
