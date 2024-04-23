/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4A

Program draws a checkerboard
*/

#include <iostream>
using namespace std;

int main() {
    int width, height;

    cout << "Input width: ";
    cin >> width;

    cout << "Input height: " << endl;
    cin >> height;

    cout << "Shape: " << endl;

    // nested for loop

    for (int row = 0; row < height; row++) {
        for (int column = 0; column < width; column++) {
            if (column % 2 == row % 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}