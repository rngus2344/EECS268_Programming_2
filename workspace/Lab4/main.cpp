/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 2/17/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Executive.h"
#include <iostream>

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
    Executive exec(argv[1]); //sample creation of executive object
  }
  return(0);
}
