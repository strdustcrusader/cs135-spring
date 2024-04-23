/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3D

Write a program reverse-order.cpp which asks the user to input two dates
(earlier date then later date). The program should report the West basin
elevation for all days in the interval in the reverse chronological order 
(from the later date to the earlier).
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main() {
    string earlydate, latedate;
    cout << "enter first date: ";
    cin >> earlydate;
    cout << "enter later date: ";
    cin >> latedate;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);

    string date;
    double eastSt, eastEl, westSt, westEl;

    //stores in arrays to traverse through
    string dates[365];
    double elevations[365];
    int size = 0;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        if (date >= earlydate && date <= latedate){
            dates[size] = date;
            elevations[size] = westEl;
            size++;
        }
    }

    //traverse thru array
    for(int i = size-1; i>= 0; i--){
        cout << dates[i] << " " << elevations[i] << endl;
    }
    fin.close();
    return 0;
}