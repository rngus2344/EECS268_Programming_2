/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 6/30/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Blob.h"
#include <iostream>

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters.\n";
  }
  else
  {
    Blob myBlob(argv[1]);
  }
  return(0);
}
