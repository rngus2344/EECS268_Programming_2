HelloWorld: main.o Executive.o Browser.o
	g++ -std=c++11 -g -Wall main.o Executive.o Browser.o -o HelloWorld

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

Browser.o: Browser.h Browser.cpp
	g++ -std=c++11 -g -Wall -c Browser.cpp

clean:
	rm *.o HelloWorld
