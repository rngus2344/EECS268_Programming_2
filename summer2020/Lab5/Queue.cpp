/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Queue.cpp
* @date 7/6/2020
* @brief cpp file of Queue
 ---------------------------------------------------------------------------- */
//Start your program.

template <typename T>
Queue<T>::Queue()
{
  m_front = nullptr;
  m_back = nullptr;
}

template <typename T>
Queue<T>::Queue(const Queue<T>& orig)
{
  Node<T>* origNode = orig.m_front;

  if (!orig.isEmpty())
  {
    this->m_front = new Node<T>(origNode->getEntry());
    Node<T>* temp = this->m_front;
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
  }
  else
  {
    this->m_front = nullptr;
  }
}

template <typename T>
Queue<T>::~Queue()
{
  while (!isEmpty())
  {
    dequeue();
  }
  delete m_front;
}

template <typename T>
void Queue<T>::operator=(const Queue<T>& rhs)
{
  m_front = rhs.m_front;
  m_back = rhs.m_back;
}

template <typename T>
void Queue<T>::enqueue(const T value)
{
  Node<T>* temp = new Node<T>(value);
  if(m_back == nullptr)
  {
    m_back = temp;
    m_front = temp;
  }
  else
  {
    m_back->setNext(temp);
    m_back = temp;
  }
}

//remove the front element
template <typename T>
void Queue<T>::dequeue()
{
  if (m_front == nullptr)
  {
    throw (std::runtime_error("The queue is empty."));
  }
  if(m_front == m_back)
  {
    m_back = nullptr;
  }
  Node<T>* temp = m_front->getNext();
  delete m_front;
  m_front = temp;
}

template <typename T>
T Queue<T>::peekFront() const
{
  if(m_front == nullptr)
  {
    throw (std::runtime_error("The queue is empty."));
  }
  return m_front->getEntry();
}

template <typename T>
bool Queue<T>::isEmpty() const
{
  return m_front == nullptr && m_back == nullptr;
}
