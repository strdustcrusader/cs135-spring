// E6.8 Write a function bool equals(int a[], int a_size, int b[], int b_size) that checks whether two arrays have the same elements in the same order

bool equals(int a[], int a_size, int b[], int b_size) {
    // If the arrays aren't the same size, auto return false b/c cannot be the same elements in same order
    if (a_size != b_size) {
        return false;
    } 

    // For loop to iterate through the values in the array, the moment it doesn't match it will return false
    for (int i = 0; i < a_size; i++) {
        if (a[i] != b[i]) {
        return false;
    }
  }
  // Returns true if passes all the tests
  return true;
}

