// lab 6a
// takes user input and returns ascii

//import libraries
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text; // to store the user input
    getline(cin, text); // getline allows u to take the entire string  

    // for loop 
    for (int i = 0; i < text.length(); i++) { // iterates through each character of string by using length
        cout << text[i] << " " << (int)text[i] << endl; // text[i] returns the character, (int)text[i] returns the ascii code 
    }

}