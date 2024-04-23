// sort by 3
#include <iostream>
using namespace std;


void sort3(int& a, int& b, int& c) {
    if (a > b) {
        swap(a, b);
    }

    if (b > c) {
        swap(b, c);
    }

    if (a > b) {
        swap(a, b);
    }
}

int main() {
    int v, w, x;

    cout << "Enter a integer: ";
    cin >> v;
    cout << "Enter a integer: ";
    cin >> w;
    cout << "Enter a integer: ";
    cin >> x;

    sort3(v, w, x);
    cout << v << " " << w << " " << x;

    return 0;
}
