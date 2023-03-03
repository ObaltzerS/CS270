LetterStackMain: LetterStack.o LetterStackMain.o
	g++ LetterStack.o LetterStackMain.o -o LetterStackMain
LetterStack.o: LetterStack.h LetterStack.cpp
	g++ -c LetterStack.cpp -o LetterStack.o
LetterStackMain.o: LetterStackMain.cpp LetterStack.cpp LetterStack.h
	g++ -c LetterStackMain.cpp -o LetterStackMain.o
