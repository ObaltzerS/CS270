
#ifndef LetterStack_H
#define LetterStack_H


class LetterStack
{

public:

    LetterStack();

    void reset();

    void push(char dir);

    char pop();

    bool isEmpty() const;

private:

    int size;
    int letterStack[10];
    int topIndex;

};

#endif