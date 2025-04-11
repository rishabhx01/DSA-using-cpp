// do-while questions:

// Write a program that prints "Rishabh" at least once, even if the condition is false.

#include <bits/stdc++.h>
using namespace std;

int main () {

    int i = 5;
    do
    {
        cout << "Rishabh " << i << endl;
    } while (i <= 1);                           // Condition is false, but it still runs once.
    return 0;
    
}


// Practice this 
// 1. Print numbers from 1 to N
//    - Prompt the user to enter a number N.
//    - Use a do-while loop to print numbers from 1 to N.
    
// 2. Sum of digits of a number
//    - Take an integer input from the user.
//    - Use a do-while loop to extract each digit and compute the sum.
    
// 3. Reverse a Number
//    - Take an integer input from the user.
//    - Use a do-while loop to reverse the digits of the number.
    
// 4. Guess the Number Game
//    - Generate a random number between 1 and 10.
//    - Prompt the user to guess the number.
//    - Continue asking until the correct number is guessed.
    
// 5. Menu-driven Program
//    - Display a menu with options to print messages or exit.
//    - Use a do-while loop to keep showing the menu until the user chooses to exit.
    
// 6. Print "Hello, World!" once even if the condition is false
//    - Use a do-while loop where the condition is false from the start.
//    - Ensure "Hello, World!" is printed at least once.
    
// 7. Take user input at least once, even if they enter a negative number
//    - Prompt the user to enter a positive number.
//    - Use a do-while loop to ensure input is taken at least once.
    
// 8. Print a countdown even if the starting number is 0
//    - Prompt the user for a starting number.
//    - Use a do-while loop to print a countdown from that number to 0.
    
// 9. Ask for a password at least once
//    - Set a predefined password.
//    - Use a do-while loop to repeatedly ask the user for the password until they enter it correctly.
    
// 10. Run a game loop at least once, even if the player chooses to quit immediately
//    - Display a message that the game has started.
//    - Ask the user if they want to continue.
//    - Ensure the loop runs at least once, even if they choose to quit immediately.
    