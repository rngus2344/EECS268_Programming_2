/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 3/2/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Node.h"
#include "LinkedList.h"
#include <iostream>

int main()
{
  LinkedList<int> myList;
  myList.insert(1, 5);
  std::cout << myList.getEntry(1) << "\n";
  return(0);
}
