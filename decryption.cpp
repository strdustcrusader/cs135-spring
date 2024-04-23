// decryption
// lab 6d
// uses all functions and methods from previous + creates 2 more
// i need five comments
// please god i understand y java had classes now

#include <iostream>
using namespace std;

string decryptCaesar(string ciphered, int rshift) {
    string decrypted = "";

    for (int i = 0; i < ciphered.length(); i++) {
        char current = ciphered[i];
        if (isupper(current)) {
            current = 'A' + (current - 'A' - rshift + 26) % 26;
        } else if (islower(current)) {
            current = 'a' + (current - 'a' - rshift + 26) % 26;
        }
        decrypted += current;
    }
    return decrypted;
}

string decryptVigenere(string ciphered, string keyword) {
    string decrypted = "";
    int num = 0;
    int key;
    char current;

    for (int i = 0; i < ciphered.length(); i++) {
        current = ciphered[i];

        if (isupper(current)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            current = 'A' + ((current - 'A' + 26 - key) % 26);
        } else if (islower(current)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            current = 'a' + ((current - 'a' + 26 - key) % 26);
        }
        decrypted += current;
    }
    return decrypted;
}

string encryptVigenere(string plaintext, string keyword) {
    string encryption = "";
    char current; // the current character to be encrypted
    int num = 0; 
    int key; // the amount that it will be shifted by
    int newPos; // new position

    // for loop to iterate and replace
    for (int i = 0; i < plaintext.length(); i++ ) {
        current = plaintext[i];
        // checks if uppercase
        if (isupper(current)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            newPos = (current - 'A' + key) % 26;
            current = 'A' + newPos;
        // checks if lowercase
        } else if (islower(current)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            newPos = (current - 'a' + key) % 26;
            current = 'a' + newPos;
        }
        encryption += current; // adds onto the empty string until completion
    }
    return encryption; // returns the new string
}

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

int main() {
    string plaintext, keyword, encryption;
    int rshift;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    // Caesar encryption and decryption output
    // Tests the decryptCaesar function w/ user input
    cout << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> rshift;
    encryption = encryptCaesar(plaintext, rshift);
    cout << "Ciphertext: " << encryption << endl;
    cout << "Decrypted: " << decryptCaesar(encryption, rshift) << endl;

    // Vigenere and decryption output
    // Tests the decryptVigenere function w/ user input
    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    encryption = encryptVigenere(plaintext, keyword);
    cout << "Ciphertext: " << encryption << endl;
    cout << "Decrypted: " << decryptVigenere(encryption, keyword) << endl;
    return 0;
}