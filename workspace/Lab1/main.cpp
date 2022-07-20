/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 6/8/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Game.h"
#include "Executive.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
     Executive exec(argv[1]); //sample creation of executive object
     exec.run(); //presumably handles the calling of all other member methods
  }
  return(0);
}
