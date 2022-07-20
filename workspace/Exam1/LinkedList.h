/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file LinkedList.h
* @date 3/2/2020
* @brief header file of LinkedList
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <stdexcept>

template <typename T>
class LinkedList
{
private:
  int m_length;
  Node<T>* m_front;

public:
  LinkedList();

  LinkedList(const LinkedList<T> & orig);

  ~LinkedList();

  /**
  * @pre The index is valid
  * @post The entry is added to the list at the index, increasing length by 1
  * @param index, position to insert at (1 to length+1)
  * @param entry, value/object to add to the list
  * @throw std::runtime_error if the index is invalid
  */
  void insert(int index, T entry);

  /**
  * @pre The index is valid
  * @post The entry at given position is removed, reducing length by 1
  * @param index, position to insert at (1 to length)
  * @throw std::runtime_error if the index is invalid
  */
  void remove(int index);

  //int getLength() const;

  //void setLength(int length);

  /**
  * @pre The index is valid
  * @post None
  * @param index, position to insert at (1 to length)
  * @throw std::runtime_error if the index is invalid
  */
  T getEntry(int index);

  /**
  * @pre The index is valid (must already exist)
  * @post Given entry overrides the entry at the given index
  * @param index, position to override at (1 to length)
  * @param entry, value/object to place at given index
  * @throw std::runtime_error if the index is invalid
  */
  void setEntry(int index, T entry);

  /**
  * @pre None
  * @post List is empty
  * @throw None
  */
  void clear();
};

#include "LinkedList.cpp"
#endif
