#include <iostream>
using namespace std;



// a function which sums two integers, a test
int sum(int num1, int num2){ // interface, what tells the user how to use the function
    return num1 + num2;
}


int main(){
    cout << sum(5, 6);
    return 0;
}