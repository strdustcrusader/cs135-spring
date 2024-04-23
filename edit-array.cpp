
/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Creates an array of 10 integers and provides the user
with an interface to edit any of its elements
*/

#include <iostream>
using namespace std;

int main() {
    // Create an array myData of 10 integers
    int myData[10];

    // Fill all of its cells with value 1 (using for loop)
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }
    
    // Ask the user to input the cell index i and it's new value v
    int i;
    int v;
    
    do { 
        for (int i = 0; i < 10; i++) {
        cout << myData[i] << " ";
    } 
        cout << "\nInput index: ";
        cin >> i;
        cout << "Input value: ";
        cin >> v;

        if (0 <= i && i < 10) {
            myData[i] = v;
        } 
    } while (0 <= i && i < 10);
    cout << "Index out of range. Exit.";
}
