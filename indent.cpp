#include <iostream>
#include <string>
using namespace std;

string removeLeadingSpaces(string line) {
    // To iterate through the array at the beginning 
    int i = 0;
    
    // Loop will end when char is a not sa space 
    while (isspace(line[i])) {
        i++;
    }
    // returns original sentence unindented
    return line.substr(i);
}

//function to count how many of a char 'c' in a line 
int countChar(string line, char c) {
    int count = 0; // keep track of the count

    // for loop to iterate throughout entire line
    for (int i = 0; i < line.length(); i++) {
        if(line[i] == c) {
            count++; // updates the count 
        }
    }
    return count;
}

// Another helper function
void printLine(string line, int indent) {
    for(int i = 0; i < indent; i++) {
        cout << '\t';
    }
    cout << line << endl;
}

// Main function to test
int main() {
    string line;
    // number of tabs at beginning of each line
    int tabs = 0;

    while (getline(cin, line)) {
        line = removeLeadingSpaces(line);

        if (line[0] == '}') {
            printLine(line, tabs-1);
        } else {
            printLine(line, tabs);
        }
        tabs += countChar(line, '{') - countChar(line, '}');
    }
    // return to end function
    return 0;
}