// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 4 Proble 1


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // declare all variables
    int number;
    int sum = 0;
    int max_val;
    
    // prompt the user and get their input
    cout << "Enter a non-negative integer:" << endl;
    cin >> number;
    
    // input validation
    if (number < 0) //EDIT THIS LINE
    { 
        cout << "Invalid input." << endl;
    }
    else
    {
        // compute square root
        max_val = sqrt(number);
        
        // loop to compute sum of perfect squares
        for (int i = 0; i <= max_val; i++) //EDIT THIS LINE
        {
            sum += i*i; //EDIT THIS LINE
        }
        cout << "Sum: " << sum << endl;
    }
    return 0;
}
