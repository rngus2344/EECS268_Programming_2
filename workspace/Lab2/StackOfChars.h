/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file StackOfChars.h
* @date 2/3/2020
* @brief header file of StackOfChars
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef STACKOFCHARS_H
#define STACKOFCHARS_H
#include "Node.h"

class StackOfChars
{
private:
	Node* m_top;
public:
	/**
	* @pre None
	* @post Creates an uninitialized Node* object
	* @param None
	* @throw None
	**/
	StackOfChars();

	/**
	* @pre orig is non-empty
	* @post Creates deep copy of orig
	* @param orig is copied
	* @throw None
	**/
	StackOfChars(const StackOfChars& orig);

	/**
	* @pre Copy constructor constructed a m_top
	* @post Deletes m_top
	* @param None
	* @throw None
	**/
  ~StackOfChars();

	/**
	* @pre None
	* @post Creates shallow copy of rhs
	* @param rhs is copied
	* @throw None
	**/
	void operator=(const StackOfChars& rhs);

  /**
  * @pre None
  * @post entry is added to top of the stack
  * @param entry, the element to be added to the stack
  * @throw None
  **/
	void push(char entry);

  /**
  * @pre Stack is non-empty
  * @post Top element is removed from the stack
  * @param None
  * @throw None
  **/
	void pop();

	/**
	* @pre Stack is non-empty
	* @post Prints the top element from the stack
	* @param None
	* @throw Returns the top element
	**/
	char peek() const;

	/**
	* @pre None
	* @post Checks whether the stack is empty or not
	* @param None
	* @throw Returns true if the stack is empty, false otherwise
	**/
	bool isEmpty() const;
};
#endif
