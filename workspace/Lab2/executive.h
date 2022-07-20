/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file executive.h
* @date 2/3/2020
* @brief header file of executive
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Node.h"
#include <string>
#include "StackOfChars.h"
#include "StackTester.h"

class executive
{
private:
  StackTester tests;

public:
  /**
  * @pre None
  * @post Runs either StackTester mode or Parcer mode
  * @param mode decides which mode to print
  * @throw None
  **/
  executive(std::string mode);

  /**
  * @pre None
  * @post Parcer mode. Tells the user whether the sequence is balanced or not
  * @param None
  * @throw None
  **/
  void run();
};
#endif
