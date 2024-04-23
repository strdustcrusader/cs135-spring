// Lab1A
// Joey Huang
// 3/2/24

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d) {
    // To avoid the error for when dividing by 0
    // if elif statement 
    if (d == 0) {
        return false;
    } else if (n % d == 0) {
        return true;
    } else {
        return false;
    }
}

bool isPrime(int n) {
    // A prime # HAS to be an int > 2
    if (n < 2) {
        return false;
    }
    // n is a prime if it isn't divisible evenly by any #
    // from 2 to N-1
    for (int i = 2; i < n; i++) {
        if(isDivisibleBy(n,i)) {
            return false;
        }
    }
    return true;
}

int nextPrime(int n) {
    int i = n+1;

    while(!(isPrime(i))) {
        i++;
    }
    return i++;
}

int countPrimes(int a, int b) {
    int numOfPrimes = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) == true) {
            numOfPrimes++;
        }
    }
    return numOfPrimes;
}

bool isTwinPrime(int n) {
    // Have to check if it's prime first
    if(!isPrime(n)) {
        return false;
    }

    // Now check if it's a twin prime
    if (isPrime(n-2) || isPrime(n+2)) {
        return true;
    } else {
        return false;
    }
}

int nextTwinPrime(int n) {
    int i = n+1;

    while(!(isTwinPrime(i))) {
        i++;
    }
    return i;
}

// Finds the largest twin in interval
// Combo of finding # of prime + isTwinPrime
int largestTwinPrime(int a, int b) {
    for (int i = b; i >= a; i--) {
        if(isTwinPrime(i)) {
            return i;
        }
    }
    return -1;
}



// Testing 
int main() {
 
    // Taking user input
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << largestTwinPrime(a, b);
    return 0;
}

