// e7.1

#include <iostream>
using namespace std;

void sort2(double * p, double * q){

if (*p > *q) {
    swap(*p, *q);
 }
}
int main() {
  double x, y;

  cout << "Enter a number for x: ";
  cin >> x;
  cout << "Enter a number for y: ";
  cin >> y;

  sort2(&x, &y);
  cout << "X is now: " << x << endl;
  cout << "Y is now: " << y << endl;

  return 0;
}