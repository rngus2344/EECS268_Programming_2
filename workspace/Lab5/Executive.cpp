/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.cpp
* @date 3/2/2020
* @brief cpp file of Executive
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Executive.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive(std::string fileName)
{
  std::string command;
  std::string url;

  std::ifstream inFile;

  inFile.open(fileName);
  if (inFile.fail()) return;
  while (inFile >> command)
  {
    if (command == "NAVIGATE")
    {
      inFile >> url;
      m_url.navigateTo(url);
    }
    else if(command == "BACK")
    {
      back();
    }
    else if(command == "FORWARD")
    {
      forward();
    }
    else if(command == "HISTORY")
    {
      std::cout << "Oldest\n===========\n";
      current();
      std::cout << "===========\nNewest\n";
    }
  }
  inFile.close();
}
