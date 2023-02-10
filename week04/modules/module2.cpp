#include <iostream>
using namespace std;
//second try, use a decleration of the interface so that main does not need to have the complete function

// this is the interface
int sum(int num1, int num2); // advanced decleration


int main(){
    cout << sum(5, 6);
    return 0;
}

// a function which sums two integers, returns the sum
// this is the implimentation
int sum(int num1, int num2){ // interface, what tells the user how to use the function
    return num1 + num2;
}
