// Homework E5.14

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
if (a > b) {
    swap(a, b);
 }
}

int main() {
int u = 2;
int v = 3;
int w = 4;
int x = 1;

sort2(x, u);

sort2(v, w);

cout << u << v;

cout << w << x;

return 0;

}
