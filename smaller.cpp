// Quick program to determine the smaller of two integers 

#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (a < b) {
        cout << "The smaller of the two is" << a;
    } else {
        cout << "The smaller of the two is " << b;
    }
}