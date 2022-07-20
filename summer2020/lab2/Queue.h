/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Queue.h
* @date 6/19/2020
* @brief header file of Queue
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

template <typename T>
class Queue
{
private:
  Node<T>* m_front;
  Node<T>* m_back;

public:
  /**
  * @pre None
  * @post Creates an uninitialized Node<T>* object
  * @param None
  * @throw None
  **/
  Queue();

  /**
  * @pre orig is non-empty
  * @post Creates deep copy of orig
  * @param orig is copied
  * @throw None
  **/
  Queue(const Queue<T>& orig);

  /**
  * @pre Copy constructor constructed a m_front
  * @post Deletes m_front
  * @param None
  * @throw None
  **/
  ~Queue();

  /**
  * @pre None
  * @post Creates shallow copy of rhs
  * @param rhs is copied
  * @throw None
  **/
  void operator=(const Queue<T>& rhs);

  /**
  * @pre None
  * @post value is added to back of the queue
  * @param value, the element to be added to the queue
  * @throw None
  **/
  void enqueue(const T value);

  /**
  * @pre Queue is non-empty
  * @post Back element is removed from the queue
  * @param None
  * @throw None
  **/
  void dequeue();

  /**
  * @pre Queue is non-empty
  * @post Prints the front element from the queue
  * @param None
  * @throw Returns the top element
  **/
  T peekFront() const;

  /**
  * @pre None
  * @post Checks whether the queue is empty or not
  * @param None
  * @throw Returns true if the queue is empty, false otherwise
  **/
  bool isEmpty() const;
};

#include "Queue.cpp"
#endif
