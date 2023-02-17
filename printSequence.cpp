// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 4 Problem 2

#include <iostream>
using namespace std;

int main()
{
    // declare vairiables 
    int value;
    // prompt the user and get their input
    cout << "Enter  a value between 1 and 1000: \n";
    cin >> value;
    // validate user input
    while (value <= 1 || value >= 1000 )
    {
    cout << "Invalid input. \n";
    cout << "Enter  a value between 1 and 1000: \n";
    cin >> value;
    }
    cout << value << endl;
    // while loop for when the value is even you divide by 2
    while ( value != 1){
        // if statement for when value is multiple of 2 do this equation
        if (value % 2 == 0){
            value /= 2;
        }
        // when the value is not a multiple of 2 do this equation 
        else
        {
            value = 3*value + 1;
            
        }
        // output result
         cout << value << endl;
    }
    return 0;
  
    }
