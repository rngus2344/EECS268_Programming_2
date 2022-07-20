HelloWorld: main.o
	g++ -std=c++11 -g -Wall main.o -o HelloWorld

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -std=c++11 -g -Wall -c LinkedList.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

clean:
	rm *.o HelloWorld
