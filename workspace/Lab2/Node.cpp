/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Node.cpp
* @date 2/3/2020
* @brief cpp file of Node
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Node.h"

Node::Node(char entry)
{
  m_entry = entry;
  m_next = nullptr;
}

char Node::getEntry() const
{
  return(m_entry);
}

void Node::setEntry(char entry)
{
  m_entry = entry;
}

Node* Node::getNext() const
{
  return(m_next);
}

void Node::setNext(Node* next)
{
  m_next = next;
}
