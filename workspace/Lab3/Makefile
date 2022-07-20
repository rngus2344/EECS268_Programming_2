HelloWorld: main.o executive.o
	g++ -std=c++11 -g -Wall main.o executive.o -o HelloWorld

main.o: main.cpp 
	g++ -std=c++11 -g -Wall -c main.cpp

executive.o: executive.cpp executive.h
	g++ -std=c++11 -g -Wall -c executive.cpp

clean:
	rm *.o HelloWorld
