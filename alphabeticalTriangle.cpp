// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 4 Problem 5

#include <iostream>
using namespace std;

int main(){
    int input;
    // declare variables
    int idx = 0;
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    // prompt user to input height
    cout << "Enter the height:" << endl;
    cin >> input;
    // input validation
    if (input <= 0){
        cout << "Invalid input." << endl;
        return 0;
    }
    
    // loop to compute alphabetic triangle
    for(int i = 1; i <= input; i++){
        int line = (i*2)-1;
        for(int j = 0; j < line; j++){
            if (idx > 25){
                idx = 0;
            }
            cout << alphabet[idx];
            idx++;
        }
        cout << endl;
    }
    return 0;
}
