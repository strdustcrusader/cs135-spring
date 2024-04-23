// Lab 7A
// Joey Huang
// removeLeadingSpaces function

#include <iostream>
#include <string>
using namespace std;

string removeLeadingSpaces(string line) {
    // To iterate through the array at the beginning 
    int i = 0;
    
    // Loop will end when char is a not a space 
    while (isspace(line[i])) {
        i++;
        //updates the iteration 
    }
    // Returns the unindented string
    return line.substr(i);
}

// Main to test the removeLeadingSpaces function
int main() {
    string line;
    while(getline(cin, line)) {
        cout << removeLeadingSpaces(line) << endl;
    }
}

