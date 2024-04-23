/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Program that tests if user input is increasing, decreasing,
or neither
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int b;
    cout << "Enter a number: ";
    cin >> b;

    int c;
    cout << "Enter a number: ";
    cin >> c;

    if (b > a && c > b) {
        cout << "Increasing";
    } else if (b < a && c < b) {
        cout << "Decreasing";
    } else {
        cout << "Neither";
    }
}