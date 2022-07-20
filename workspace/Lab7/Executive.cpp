/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.cpp
* @date 5/1/2020
* @brief cpp file of Executive
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Executive.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string fileName)
{
  // int size, index, p_index;
  // std::string command;
  // std::string shape;
  // double radius, base, height, length, width;
  // circ = new Circle();
  // tri = new Triangle();
  // rec = new Rectangle();
  int numRows, numCols, startRow, startCol;

  std::ifstream inFile;

  inFile.open(fileName);
  if (inFile.fail()) return;
  inFile >> numRows >> numCols >> startRow >> startCol;

  char maze[numRows][numCols];

  while (inFile >> index)
  {
    if (command == "ADD")
    {
      inFile >> index;
      inFile >> shape;

      if(shape == "CIR")
      {
        inFile >> radius;
        circ->setRadius(radius);
        container.add(circ, index);
      }
      else if(shape == "TRI")
      {
        inFile >> base;
        inFile >> height;
        tri->setBase(base);
        tri->setHeight(height);
        container.add(tri, index);
      }
      else
      {
        inFile >> length;
        inFile >> width;
        rec->setLength(length);
        rec->setWidth(width);
        container.add(rec, index);
      }
    }
    else if(command == "PRINT")
    {
      inFile >> p_index;
      std::cout << "Shape at index " << p_index << ": ";
      try
      {
        std::cout << container.shapeName(p_index) << " area = " << container.area(p_index) << '\n';
      }
      catch(std::runtime_error& rte)
      {
        std::cout << rte.what() << '\n';
      }
    }
    else if(command == "EXIT")
    {
      std::cout << "Exiting...\n";
    }
  }

  inFile.close();
}

Executive::~Executive()
{
  delete circ;
  delete tri;
  delete rec;
}
