//Create a function that returns the middle character

#include <iostream>
#include <string>
using namespace std;

string middle(string str) {
    int i = str.length();

    // Returns a string containing 2 middle character 
    // in str if the length is even
    if (i % 2 == 0) {
        return str.substr(i/2 - 1, 2); //substr(pos, sizet, len)
    } else {
        return str.substr(i/2, 1);
    }
}

int main() {
    string input;
    cout << "Enter a word to print the middle character: ";
    cin >> input;
    string middleChr = middle(input);

    cout << middleChr;
    return 0;
}