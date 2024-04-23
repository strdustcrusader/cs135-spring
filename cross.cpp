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
    cout << "Enter a number: " << endl;
    cin >> num;

    int last = num - 1;

    // nested for loop

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i == j || j == last-i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}