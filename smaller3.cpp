#include <iostream>
using namespace std;

/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

A program that asks the user to input three integer #'s
and prints out the smaller of the three 
*/

int main() {
    int a;
    int b;
    int c;

    cout << "Enter the first number: ";
    cin >> a; 
    
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "Enter the third number: ";
    cin >> c;

    // if-else statements to first compare a and b
    // takes the smaller of the two and compares to c
    if (a < b && a < c) {
        cout << "The smaller of the three is: " << a;
    } else if (b < a && b < c) {
        cout << "The smaller of the three is: " << b;
    } else {
        cout << "The smaller of the three is: " << c;
    }
}
