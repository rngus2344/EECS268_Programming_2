HelloWorld: main.o Node.o StackOfChars.o StackTester.o executive.o
	g++ -std=c++11 -g -Wall main.o Node.o StackOfChars.o StackTester.o executive.o -o HelloWorld

main.o: main.cpp Node.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp
	g++ -std=c++11 -g -Wall -c StackOfChars.cpp

StackTester.o: StackTester.h StackTester.cpp
	g++ -std=c++11 -g -Wall -c StackTester.cpp

executive.o: executive.h executive.cpp
	g++ -std=c++11 -g -Wall -c executive.cpp
clean:
	rm *.o HelloWorld
