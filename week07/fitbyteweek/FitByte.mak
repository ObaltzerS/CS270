FitByteMain: FitByte.o FitByteMain.o
	g++ FitByte.o FitByteMain.o -o FitByteMain
FitByte.o: FitByte.h FitByte.cpp
	g++ -c FitByte.cpp -o FitByte.o
FitByteMain.o: FitByteMain.cpp FitByte.cpp FitByte.h
	g++ -c FitByteMain.cpp -o FitByteMain.o
