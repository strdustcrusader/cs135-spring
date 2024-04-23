/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

E2.10
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Input a word: ";
    cin >> word;

    // for every letter in the string word
    for (char l : word) {
        cout << l << endl;
    }

}