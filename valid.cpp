/*
Author: Joey Huang
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB2A

Asks the user to input an integer in the range 0<n<100
if the number is out of range the program will keep
asking to reenter until a valid number is input 
*/

#include <iostream>
using namespace std;

int main() {
  int i;

  do {
    cout << "Enter a number: ";
    cin >> i;
    // prompts user to re-enter # if it isn't
    // in between 0 and 100 
    
    if (i <= 0 || i >= 100) {
      cout << "Re-enter a number: ";
      cin >> i;;
    }
  } while (i <= 0 || i >= 100);    

  // i must be in between 0 and 100
  
  cout << i*i; 
}
