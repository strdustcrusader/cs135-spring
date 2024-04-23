
/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Asks the user to input 2 integers L and U, and print out all
integers in the range L <= < U separated by spaces
*/

#include <iostream>
using namespace std;

int main(){
    int L;
    cout << "Please enter L: ";
    cin >> L;
    
    int U;
    cout << "Please enter U: ";
    cin >> U;

    //for loop
    for (int i = L; i  < U; i++){
        cout << i << " ";
    }
}
