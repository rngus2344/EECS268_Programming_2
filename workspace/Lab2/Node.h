/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Node.h
* @date 2/3/2020
* @brief header file of Node
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef NODE_H
#define NODE_H

class Node
{
private:
	char m_entry;
	Node* m_next;

public:
	/**
	* @pre entry is valid
	* @post Creates a node with m_entry and m_next
	* @param entry is copied on m_entry
	* @throw None
	**/
	Node(char entry);

	/**
	* @pre Stack is non-empty
	* @post Gets m_entry
	* @param None
	* @throw Returns m_entry
	**/
	char getEntry() const;

	/**
	* @pre entry is valid
	* @post Sets m_entry
	* @param entry is copied on m_entry
	* @throw None
	**/
	void setEntry(char entry);

	/**
	* @pre None
	* @post Gets m_next
	* @param None
	* @throw Returns m_next
	**/
	Node* getNext() const;

	/**
	* @pre next is valid
	* @post Sets m_next
	* @param next is copid on m_next
	* @throw None
	**/
	void setNext(Node* next);
};
#endif
