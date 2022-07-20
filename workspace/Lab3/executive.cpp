/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file executive.cpp
* @date 2/10/2020
* @brief cpp file of executive
 ---------------------------------------------------------------------------- */
//Start your program.
#include "executive.h"
#include <iostream>
#include <fstream>
#include <string>

executive::executive(std::string fileName)
{
  std::string command;
  std::string name;
  int num;

  std::ifstream inFile;

  inFile.open(fileName);
  if (inFile.fail()) return;
  while (inFile >> command)
  {
    if (command == "WAIT")
    {
      inFile >> name;
      ground.enqueue(name);
    }
    else if(command == "PICK_UP")
    {
      inFile >> num;
      for (int i = 0; i < num; i++)
      {
        elevator.push(ground.peekFront());
        try
        {
          ground.dequeue();
        }
        catch (std::runtime_error& rte)
        {
          std::cout << rte.what() << '\n';
        }
      }
    }
    else if(command == "DROP_OFF")
    {
      inFile >> num;
      for (int i = 0; i < num; i++)
      {
        try
        {
          elevator.pop();
        }
        catch (std::runtime_error& rte)
        {
          std::cout << rte.what() << " Can't DROP_OFF!\n";
          break;
        }
      }
    }
    else if (command == "INSPECTION")
    {
      std::cout << "Elevator status: \nThe elevator is ";
      if(elevator.isEmpty())
      {
        std::cout << "empty.\n";
        std::cout << "No one is in the elevator.\n";
      }
      else
      {
        std::cout << "not empty.\n";
        try
        {
          std::cout << elevator.peek() << " will be the next person to leave the elevator.\n";
        }
        catch (std::runtime_error& rte)
        {
          std::cout << rte.what() << "Can't Peek!\n";
        }
      }
      if (ground.isEmpty())
      {
        std::cout << "No one is in the line for the elevator.\n";
      }
      else
      {
        try
        {
          std::cout << ground.peekFront() << " will be the next person to get on the elevator.\n\n";
        }
        catch (std::runtime_error& rte)
        {
          std::cout << rte.what() << "Can't Peek!\n";
        }
      }
    }
  }

  inFile.close();
}
