/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file StackTester.cpp
* @date 2/3/2020
* @brief cpp file of StackTester
 ---------------------------------------------------------------------------- */
//Start your program.
#include "StackTester.h"
#include "StackOfChars.h"
#include <iostream>

StackTester::StackTester()
{
  myStack = StackOfChars();
}

void StackTester::runTests()
{
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
}

void StackTester::test01()
{
  std::cout << "Test #1: New stack is empty: ";
  if(myStack.isEmpty() == true)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test02()
{
  StackOfChars myStack;
  myStack.push('a');
  std::cout << "Test #2: Push on empty stack makes it non-empty: ";
  if(myStack.isEmpty() == false)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test03()
{
  StackOfChars myStack;
  myStack.push('a');
  myStack.pop();
  std::cout << "Test #3: Popping all elements makes stack empty: ";
  if(myStack.isEmpty() == true)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test04()
{
  StackOfChars myStack;
  bool control = true;
  myStack.push('a');
  myStack.push('b');
  StackOfChars temp(myStack);
  std::cout << "Test #4: Copy constructor copies all elements in correct order: ";

   while(!myStack.isEmpty())
   {
    if(myStack.peek() != temp.peek())
    {
      control = false;
      break;
    }
    myStack.pop();
    temp.pop();
   }

  if(control)
  {
   std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test05()
{
  StackOfChars myStack;
  myStack.push('a');
  myStack.push('b');
  myStack.push('c');
  std::cout << "Test #5: peek prints the topmost element: ";
  if(myStack.peek()=='c')
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test06()
{
  StackOfChars myStack;
  myStack.push('a');
  myStack.push('b');
  std::cout << "Test #6: pushing on empty stack twice makes correct topmost element: ";
  if(myStack.peek()=='b')
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void StackTester::test07()
{
  StackOfChars myStack;
  myStack.push('a');
  myStack.push('b');
  myStack.push('c');
  myStack.pop();
  std::cout << "Test #7: pushing on empty stack three times and pop once makes correct topmost element: ";
  if(myStack.peek()=='b')
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}
