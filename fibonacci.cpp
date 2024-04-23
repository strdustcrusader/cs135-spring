/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Write a program which uses an array of ints to compute and
print all fibonacci numbers from f(0) - f(59)
*/

#include <iostream>
using namespace std;

int main() {
    // make an array
    int fib[60];
    
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << endl << fib[1] << endl;
    // print all fibonacci numbers
    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }
}
