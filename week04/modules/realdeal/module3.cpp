// implimentation
#include <iostream>
using namespace std;
// a function which sums two integers, returns the sum
// this is the implimentation
int sum(int num1, int num2){ // interface, what tells the user how to use the function
    
    return num1 + num2;

}
void printstars(int width, int height){
    for(int i =0; i <= width; i++){
        for (int j =0; j<= height; j++){
            cout << "*";
        }
        cout << endl;
    }
}
