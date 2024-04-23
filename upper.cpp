/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4A

Program draws a cross
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input side length: " << endl;
    cin >> num;

    // nested for loop

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = i; j < num; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}