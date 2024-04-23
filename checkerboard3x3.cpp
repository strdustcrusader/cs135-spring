// checkerboard
// this is 4G

#include <iostream>
using namespace std;

int main() {
    int width, height; // variables

    cout << "Input width: ";
    cin >> width;

    cout << "Input height ";
    cin >> height;
    cout << endl;

    // nested for loop
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // if statement
            if ((j / 3) % 2 == (i / 3) % 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}