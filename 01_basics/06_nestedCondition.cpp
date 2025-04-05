/* QUE 3: Nested if-else (Job Eligibility Check) */

/*
Write a C++ program that takes the age of a person as input and determines their 
job eligibility using nested if-else statements based on the following conditions:

1. If the age is less than 18, print:  
   "not eligible for job"

2. If the age is between 18 and 54 (inclusive), print:  
   "eligible for job"

3. If the age is between 55 and 57 (inclusive), print:  
   "eligible for job, but retirement soon"

4. If the age is above 57, print:  
   "retirement time"


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job" << endl;
    }
    else if(age <= 54){
        cout << "eligible for job" << endl;
    }
    else if(age <= 57){
        cout << "eligible for job, but retirement soon" << endl;
    }
    else{
        cout << "retirement time" << endl;
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter age: ";
    cin >> age;
    if(age < 18){
        cout << "not eligible for job" << endl;
    }
    //nested if
    else if(age <= 57){   //18 to 57 we know eligible for job
        cout << "eligible for job" << endl;
        if(age >= 55){
            cout << ", but retirement soon" << endl; //but if 55+ inside this we are saying retirement soon.
        }
    }
    else{
        cout << "retirement time" << endl;
    }
    return 0;
}