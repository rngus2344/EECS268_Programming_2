/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file executive.h
* @date 6/19/2020
* @brief header file of executive
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Node.h"
#include "Stack.h"
#include "Queue.h"

#include <string>

//template <typename T>
class executive
{
private:
  Queue<std::string> ground;
  Stack<std::string> elevator;

public:
  /**
  * @pre None
  * @post Creates queue and stack with the data from the file and print what it needs to print.
  * @param fileName, name of the file to open
  * @throw None
  **/
  executive(std::string fileName);

};

//#include "executive.cpp"
#endif
