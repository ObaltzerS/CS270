#include <iostream>
using namespace std;

// Demonstration of how to use a temporary variable to swap two data values.

int main() {
  // Example 1. Swap two type double variables.
  double A = 1.8;
  double B = 3.95;
  double temp;
  cout << "Before the swap A is " << A << " and B is " << B << endl;

  // Save one value into a temporary variable.
  temp = A;
  A = B;  // Write value of B into variable A. What would happen to A without the temp?
  B = temp;
  cout << "After the swap A is " << A << " and B is " << B << endl; 

  // Example 2. Swap two array elements.
  int data[5] ={  50, 40, 30, 20, 10 };
  // Swap elements in positions 0 and 4. This will make the value 50 and 10 trade places.
  int tempInt;

  // Save one value into a temporary variable.
  tempInt = data[0];
  data[0] = data[4];
  data[4] = tempInt;

  // Print the contents of the array after the swap.
  cout << "Contents of array after swapping first and last elements: ";
  int i = 0;
  while( i < 5 ) {
    cout << data[i] << " ";
    i++;
  }
  cout << endl;
}