/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

E2.10
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    double gallons, miles, price, cost, distance;

    cout << "Input the number of gallons of gas in the tank: ";
    cin >> gallons;

    cout << "Input the fuel efficiency in miles per gallon: ";
    cin >> miles;

    cout << "Input the price of gas per gallon: ";
    cin >> price;

    cost = price / miles * 100;
    distance = gallons * miles;

    cout << "The cost per 100 miles is " << cost << endl;
    cout << "The car can go " << distance << " miles with the gas in the tank.";
    
}