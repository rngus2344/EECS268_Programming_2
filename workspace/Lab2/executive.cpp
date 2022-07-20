/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file executive.cpp
* @date 2/3/2020
* @brief cpp file of executive
 ---------------------------------------------------------------------------- */
//Start your program.
#include "executive.h"
#include <iostream>
#include <string>

executive::executive(std::string mode)
{
  if (mode == "-t")
  {
    tests.runTests();
  }
  else if (mode == "-p")
  {
    run();
  }
  else
  {
    std::cout << "Incorrect mode.\n";
  }
}

void executive::run()
{
  std::string sequence;
  std::cout << "Enter your sequence: ";
  std::cin >> sequence;
  StackOfChars stack;
  for (int i = 0; i < sequence.length(); i++)
  {
    if (stack.isEmpty() && sequence[i] == '}')
    {
      stack.push(sequence[i]);
      break;
    }
    if (sequence[i] == '{')
    {
      stack.push(sequence[i]);
    }
    else
    {
      stack.pop();
    }
  }
  std::cout << "Sequence is ";
  if(stack.isEmpty())
  {
    std::cout << "balanced.\n";
  }
  else
  {
    std::cout << "not balanced.\n";
  }
}
