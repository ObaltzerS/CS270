#include <iostream>
#include "LetterStack.h"
using namespace std;

int main(){
    LetterStack stack;
    
    stack.push('E');
    cout << "pushed E" << endl;
    stack.push('N');
    cout << "pushed N" << endl;
    stack.push('W');
    cout << "pushed W" << endl;
    stack.push('S');
    cout << "pushed S" << endl;

    cout << "emptying stack" << endl;
    cout << "reverse values of stack items will be printed" << endl;
    
    while (!stack.isEmpty()){
        cout << stack.pop() << endl;
    }
        cout << "stack is not empty" << endl;

    return 0;
}