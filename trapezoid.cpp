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
    int width, height;
    cout << "Input width: ";
    cin >> width;

    cout << endl;

    cout << "Input height: ";
    cin >> height;

    cout << endl;

    if (width % 2 == 0 && height > width / 2) {
        cout << "Impossible shape!";
    } else if (width % 2 != 0 && height > (width/2 + 1)) {
        cout << "Impossible shape!";
    } else {
        int spaces = 0;
        int stars = width;

        for (int i = 0; i < height; i++) {
            for (int s = 0; s < spaces; s++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
            
            cout << endl;
            stars = stars - 2;
            spaces++;
        }    

    }
}