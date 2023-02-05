/*
Trending social media post conditionals
By Oliver baltzer
*/

#include <iostream>
using namespace std;

int main(){
    int numShared;
    cout << "How many times was the post shared?" << endl;
    cin >> numShared;

    if (numShared >= 10000){
        cout << "hot!";
    } else if (numShared >= 5000) {
        cout << "exciting!";
    } else if (numShared >= 1000) {
        cout << "interesting!";
    } else {
        cout << "boring";
    }
    return 0;
}