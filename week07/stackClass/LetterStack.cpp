#include "LetterStack.h"
    
// constructor
LetterStack::LetterStack(){
    this -> size = 10;
    this -> letterStack[10] = '?';
    this -> topIndex = 0;
}

// reset var
void LetterStack::reset(){
    for (int i = 0; i < size; i++){
        this -> letterStack[i] = '?';
    }
    this -> topIndex = 0;
}
// push item to top of stack
void LetterStack::push(char dir){
    this -> letterStack[topIndex] = dir;
    this -> topIndex++;
}
// pop from top of stack
char LetterStack::pop(){
    char pop = letterStack[topIndex];
    if (pop == 'N'){
        pop = 'S';
    } else if (pop == 'S'){
        pop = 'N';
    } else if (pop == 'E'){
        pop = 'W';
    } else if (pop == 'W'){
        pop = 'E'; 
    }
    this -> topIndex--;
    return pop;
}
// return whether stack is empty
bool LetterStack::isEmpty() const{
    if (topIndex == 0){
        return true;
    } else {
        return false;
    }
}