#include <iostream>
using namespace std;

void pointervalues(){
    int a;
    int b;

    cout << "Enter two integers: ";

    cin >> a;
    cin >> b;

    int *p1 = &a;
    int *p2 = &b;

    cout << "val at pointer p1" << endl;
    cout << *p1 << endl;
    cout << "val at pointer p2" << endl;
    cout << *p2 << endl;
}

void maxPointer(){
    int n;
    int max = 0;
    
    cout << "enter length of array" << endl;
    cin >> n;

    cout << "enter values in array" << endl;
    int arr[n];
    for (int i; i < n; i++){
        cin >> arr[i];
    }
    
    for(int j; j < n; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }
    int *maxptr = &max;

    cout << "max is at " << *maxptr;
    cout << "max value is " << max;
}


int main() {
    maxPointer();


    return 0;
}