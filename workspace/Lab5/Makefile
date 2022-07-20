HelloWorld: main.o LinkedList.o Node.o Browser.o Executive.o
	g++ -std=c++11 -g -Wall main.o LinkedList.o Node.o Browser.o Executive.o -o HelloWorld

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -std=c++11 -g -Wall -c LinkedList.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

Browser.o: Browser.h Browser.cpp
	g++ -std=c++11 -g -Wall -c Browser.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o HelloWorld
