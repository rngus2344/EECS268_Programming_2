/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file LinkedList.cpp
* @date 3/2/2020
* @brief cpp file of LinkedList
 ---------------------------------------------------------------------------- */
//Start your program.
template <typename T>
LinkedList<T>::LinkedList()
{
  m_front = nullptr;
  m_length = 0;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> & orig)
{
  int index = 1;
  Node<T>* temp = orig.m_front;
  while(temp != nullptr)
  {
    insert(index, temp->getEntry());
    index++;
    temp = temp->getNext();
  }
}

template <typename T>
LinkedList<T>::~LinkedList()
{
  clear();
}

template <typename T>
void LinkedList<T>::insert(int index, T entry)
{
  Node<T>* prev = nullptr;
  Node<T>* curr = nullptr;
  Node<T>* newNode = nullptr;
  newNode->setEntry(entry);
  int tempPos = 0;   // Traverses through the list
  curr = m_front;      // Initialize current to head;
  if(m_front != NULL)
  {
    while(curr->getNext() != NULL && tempPos != index)
    {
      prev = curr;
      curr = curr->getNext();
      tempPos++;
    }
    prev->setNext(newNode);
    newNode->setNext(curr);
  }
  else
  {
    m_front = newNode;
    newNode->setNext(nullptr);
  }
}

template <typename T>
void LinkedList<T>::remove(int index)
{
  if(index < 1 || index > m_length)
  {
    throw(std::runtime_error("Invalid index\n"));
  }
  if(index==1)
  {
    Node<T>* nodeHolder = m_front;
    m_front = nodeHolder->getNext();
    delete nodeHolder;
  }
  else
  {
    Node<T>* scanner = m_front;
    for(int i=1; i<index;i++)
    {
      scanner = scanner->getNext();
    }
    Node<T>* nodeHolder = scanner->getNext();
    scanner->setNext(nodeHolder->getNext());
    delete nodeHolder;
  }
  m_length--;
}

// int LinkedList::getLength() const
// {
//   return()
// }
//
// void LinkedList::setLength(int length)
// {
//
// }

template <typename T>
T LinkedList<T>::getEntry(int index)
{
  if(index>m_length || index<1)
  {
    throw(std::runtime_error("Invalid index\n"));
  }
  else
  {
    Node<T>* scanner = m_front;
    for(int i=1; i<=index; i++)
    {
      scanner = scanner->getNext();
    }
    return(scanner->getEntry());
  }
}

template <typename T>
void LinkedList<T>::setEntry(int index, T entry)
{
  remove(index);
  insert(index, entry);
}

template <typename T>
void LinkedList<T>::clear()
{
  while(m_length>0)
  {
    remove(1);
  }
}
