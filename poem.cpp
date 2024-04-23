// edit the poem
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue"; 
    return p;
}
// how many comments could a man possibly need
// rahhhhhhhhh
// rahhhhh
// rahhh
int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
        // assume that the poem p is not needed at this point
        delete p; // the added line to not crash computer
    }
}