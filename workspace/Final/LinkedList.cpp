

template <typename T>
LinkedList<T>::LinkedList()
{
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
  if (index<1 || index>m_length+1)
  {
    throw(std::runtime_error("Invalid index\n"));
    return;
  }
  else
  {
    while(index--)
    {
      // if(index == 0)
      // {
      //   // adding Node at required position
      //   Node* temp = setEntry(entry);
      //   // Making the new Node to point to
      //   // the old Node at the same position
      //   temp->next = *current;
      //   // Changing the pointer of the Node previous
      //   // to the old Node to point to the new Node
      //   *current = temp;
      // }
      // else
      // {
      //   // Assign double pointer variable to point to the
      //   // pointer pointing to the address of next Node
      //   current = &(*current)->next;
      // }
      m_length++;
    }
  }
}

template <typename T>
void LinkedList<T>::remove(int index)
{
  if(index < 1 || index > m_length)
  {
    throw(std::runtime_error("Invalid index\n"));
    return;
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
    Node<T>* nodeHolder = scanner.getNext();
    scanner.setNext(nodeHolder.getNext());
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
T LinkedList<T>::getEntry(int index) const
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

// template <typename T>
// void LinkedList<T>::setEntry(int index, T entry)
// {
//   remove(index);
//   insert(index, entry);
// }

template <typename T>
void LinkedList<T>::clear()
{
  while(m_length>0)
  {
    remove(1);
  }
}
