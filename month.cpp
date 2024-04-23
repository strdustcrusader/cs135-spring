#include <iostream>
using namespace std;

/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Asks the user to input the year and the month and prints the #
of days in that month (taking into account leap years)
*/

int main(){

    //Instantiates the year var
    int year;
    cout << "Enter year: ";
    cin >> year;

    //Instantiates the month var
    int month;
    cout << "Enter month: ";
    cin >> month;
    
    //Nested if statement 
    if (month == 2) {
        if (year % 4 != 0) {
            cout << "28 days";
        } else if (year % 100 != 0) {
            cout << "29 days";
        } else if (year % 400 != 0) {
            cout << "28 days";
        } else {
            cout << "29 days";
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "30 days";
    } else {
        cout << "31 days";
    }
  return 0;
}