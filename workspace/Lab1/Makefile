HelloWorld: main.o Game.o Executive.o
	g++ -std=c++11 -g -Wall main.o Game.o Executive.o -o HelloWorld

main.o: main.cpp Game.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Game.o: Game.h Game.cpp
	g++ -std=c++11 -g -Wall -c Game.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o HelloWorld
