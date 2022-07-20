HelloWorld: main.o Blob.o
	g++ -std=c++11 -g -Wall main.o Blob.o -o HelloWorld

main.o: main.cpp Blob.h
	g++ -std=c++11 -g -Wall -c main.cpp

Blob.o: Blob.h Blob.cpp
	g++ -std=c++11 -g -Wall -c Blob.cpp

clean:
	rm *.o HelloWorld
