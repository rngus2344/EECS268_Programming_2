/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file StackOfChars.cpp
* @date 2/3/2020
* @brief cpp file of StackOfChars
 ---------------------------------------------------------------------------- */
//Start your program.
#include "StackOfChars.h"

StackOfChars::StackOfChars()
{
    m_top = nullptr;
}

StackOfChars::StackOfChars(const StackOfChars& orig)
{
  Node* origNode = orig.m_top;
  // Node* copyNode = new Node(origNode->getEntry());

  if (!orig.isEmpty()) {
    this->m_top = new Node(origNode->getEntry());
    Node* temp = this->m_top;
    while(1)
    {
      origNode = origNode->getNext();
      if (origNode == nullptr) break;
      temp->setNext(origNode);
      temp = temp->getNext();
      //look at the value in original's current node
      //create a new node and copy the value over for the stack I'm constructing
    }
    delete temp;
    temp = nullptr;
  } else {
    this->m_top = nullptr;
  }
}

StackOfChars::~StackOfChars()
{
  delete m_top;
}

void StackOfChars::operator=(const StackOfChars& rhs)
{
  m_top = rhs.m_top;

  //pop all entries from rhs and push in temp
  //pop all entries from temp and push in rhs.push also self.push
}

void StackOfChars::push(char entry)
{
  Node* temp = new Node(entry);
  temp->setNext(m_top);
  m_top = temp;
}

void StackOfChars::pop()
{
  Node* temp = m_top->getNext();
  delete m_top;
  m_top = temp;
}

char StackOfChars::peek() const
{
  return m_top->getEntry();
}

bool StackOfChars::isEmpty() const
{
  return m_top == nullptr;
}
