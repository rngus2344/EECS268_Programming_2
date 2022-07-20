/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.cpp
* @date 6/26/2020
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
      browser.navigateTo(url);
    }
    else if(command == "BACK")
    {
      browser.back();
    }
    else if(command == "FORWARD")
    {
      browser.forward();
    }
    else if(command == "HISTORY")
    {
      std::cout << "Oldest\n===========\n";
      browser.printHistory();
      std::cout << "===========\nNewest\n\n";
    }
  }
  inFile.close();
}
