/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3C

The program should check each day in the interval and report which basin had higher elevation
on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main(){
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
    string dates[365];
    double elevations[365];
    int size = 0;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');
        if (date >= start && date <= end){
            dates[size] = date;
            elevations[size] = westEl;
            size++;
        }
    }



    for(int i = size-1; i>= 0; i--) {
        cout << dates[i] << " " << elevations[i] << endl;
    }

    return 0;
}