/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 6/26/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include "Executive.h"

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
