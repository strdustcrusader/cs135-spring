// vigenere cipher
// lab 6c


#include <iostream> 
using namespace std;

// establishing the function
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

// main function to test the encryptVigenere function
int main() {
    string text, key;

    // taking user input
    cout << "Enter plaintext: ";
    getline(cin, text);
    cout << "Enter keyword: ";
    cin >> key;

    // prints out the cypher text
    cout << "Ciphertext: " << encryptVigenere(text, key) << endl;

}