/*
 * Demonstration of pass by value versus pass by reference.
 * Pass by value is also known as pass by copy.
 * The function receives a copy of the actual value passed from main.
 *
 * Pass by reference is also known as pass by address.
 * The function receives an address/reference/pointer to the
 * actual argument that exists in main.
 */
#include <iostream>
using namespace std;

void byValue(int counter) {
  cout << "byValue gets counter as " << counter << endl;
  counter = counter + 1;
  cout << "byValue increments counter to " << counter << endl;
}

void byReference(int& counter) {
  cout << "byReference gets counter as " << counter << endl;
  counter = counter + 1;
  cout << "byReference increments counter to " << counter << endl;
}

void byPointer(int* counter) {
  cout << "byPointer gets counter as " << *counter << endl;
  *counter = *counter + 1;
  cout << "byPointer increments counter to " << *counter << endl;
}

int main() {
  int mainCounter = 1;

  cout << "Main says counter begins at " << mainCounter << endl;

  byValue( mainCounter );
  cout << "Main says counter is " << mainCounter << endl << endl;  

  byReference( mainCounter );
  cout << "Main says counter is " << mainCounter << endl << endl; 

  byPointer( &mainCounter );
  cout << "Main says counter is " << mainCounter << endl << endl; 

  return 0;
}