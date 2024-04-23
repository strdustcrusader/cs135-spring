// Caesar shift

#include <iostream>
#include <string>
using namespace std;

// A helper function to shift one chracter by rshift
char shiftChar(char c, int rshift);

// Caesar 
string encryptCaesar(string plaintext, int rshift);

// Main function to test the 
int main() {
    string text;
    int shift;
    cout << "Enter plaintext: " << endl;
    getline(cin, text);
    cout << "Enter shift: " << endl;
    cin >> shift;

    cout << encryptCaesar(text, shift) << endl;
}

// shiftChar function to use in the encryptCaeser function
char shiftChar(char c, int rshift) {
    char newChar;
    // if else statement to deal with uppercase and lowercase
    if (isupper(c)) {
        newChar = (c - 'A' + rshift) % 26 + 'A';
        return newChar;
    } else if (islower(c)) {
        newChar = ((int)c - 'a' + rshift) % 26 + 'a';
        return newChar;
    } else {
        return c; // for spaces, and non alphabetical letters
    }
}

// encryptCaesar function using shiftChar
string encryptCaesar(string plaintext, int rshift) {
    string encryption = "";
    
    // a for loop to change every char into the shifted char
    for (int i = 0; i < plaintext.length(); i++) {
        encryption += shiftChar(plaintext[i], rshift);
    }
    // returns the encrypted text
    return encryption;
}