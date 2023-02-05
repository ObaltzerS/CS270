/*
count down loop
By Oliver Baltzer
*/

#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int shares = 10;
    while (shares >= 0){
        cout << shares << endl;
        shares -= 2;
    }

    return 0;
}