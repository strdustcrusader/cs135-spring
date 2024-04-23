/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Program that tests if user input integer is positive, zero,
or negative
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (x > 0) {
        cout << "Positive";
    } else if (x < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }

}