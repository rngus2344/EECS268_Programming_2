HelloWorld: main.o Shape.o ShapeContainer.o Circle.o Triangle.o Rectangle.o Executive.o
	g++ -std=c++11 -g -Wall main.o Shape.o ShapeContainer.o Circle.o Triangle.o Rectangle.o Executive.o -o HelloWorld

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Shape.o: Shape.h Shape.cpp
	g++ -std=c++11 -g -Wall -c Shape.cpp

ShapeContainer.o: ShapeContainer.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

Circle.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Triangle.o: Triangle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

Rectangle.o: Rectangle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o HelloWorld
