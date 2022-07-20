/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file StackTester.h
* @date 2/3/2020
* @brief header file of StackTester
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef STACKTESTER_H
#define STACKTESTER_H

class StackTester
{
public:
  /**
	* @pre None
	* @post None
	* @param None
	* @throw None
	**/
  StackTester();

  //This will call all your test methods
  /**
	* @pre None
	* @post Calls all the tests methods
	* @param None
	* @throw None
	**/
  void runTests();

private:
  StackOfChars myStack;
  /**
  * @brief Creates an empty stack and verifies isEmpty() returns true
  **/
  void test01();

  /**
  * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
  **/
  void test02();

  /**
  * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
  **/
  void test03();

  /**
  * @brief Creates an empty stack, then pushes three times, pops once, and verifies peek prints the topmost element
  **/
  void test04();

  /**
  * @brief Creates an empty stack, then pushes three times, and verifies peek prints the topmost element
  **/
  void test05();

  /**
  * @brief Creates an empty stack, then pushes twice, and verifies peek prints the topmost element
  **/
  void test06();

  /**
  * @brief Creates an empty stack and temp stack, push empty stack twice,
  * copies on the temp stack, and verifies copy constructor copies all elements in correct order
  **/
  void test07();

};
#endif
