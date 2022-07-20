/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Stack.h
* @date 2/10/2020
* @brief header file of Stack
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef STACK_H
#define STACK_H
#include "Node.h"

template <typename T>
class Stack
{
private:
	Node<T>* m_top;

public:
	/**
	* @pre None
	* @post Creates an uninitialized Node<T>* object
	* @param None
	* @throw None
	**/
	Stack();

	/**
	* @pre orig is non-empty
	* @post Creates deep copy of orig
	* @param orig is copied
	* @throw None
	**/
	Stack(const Stack<T>& orig);

	/**
	* @pre Copy constructor constructed a m_top
	* @post Deletes m_top
	* @param None
	* @throw None
	**/
  ~Stack();

	/**
	* @pre None
	* @post Creates shallow copy of rhs
	* @param rhs is copied
	* @throw None
	**/
	void operator=(const Stack<T>& rhs);

  /**
  * @pre None
  * @post entry is added to top of the stack
  * @param entry, the element to be added to the stack
  * @throw None
  **/
	void push(T entry);

  /**
  * @pre Stack is non-empty
  * @post Top element is removed from the Stack
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
	T peek() const;

	/**
	* @pre None
	* @post Checks whether the stack is empty or not
	* @param None
	* @throw Returns true if the stack is empty, false otherwise
	**/
	bool isEmpty() const;
};

#include "Stack.cpp"
#endif
