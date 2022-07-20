/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Stack.cpp
* @date 6/19/2020
* @brief cpp file of Stack
 ---------------------------------------------------------------------------- */
//Start your program.

template <typename T>
Stack<T>::Stack()
{
    m_top = nullptr;
}

template <typename T>
Stack<T>::Stack(const Stack<T>& orig)
{
  Node<T>* origNode = orig.m_top;

  if (!orig.isEmpty())
  {
    this->m_top = new Node<T>(origNode->getEntry());
    Node<T>* temp = this->m_top;
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
    this->m_top = nullptr;
  }
}

template <typename T>
Stack<T>::~Stack()
{
  delete m_top;
}

template <typename T>
void Stack<T>::operator=(const Stack<T>& rhs)
{
  m_top = rhs.m_top;

  //pop all entries from rhs and push in temp
  //pop all entries from temp and push in rhs.push also self.push
}

template <typename T>
void Stack<T>::push(T entry)
{
  Node<T>* temp = new Node<T>(entry);
  temp->setNext(m_top);
  m_top = temp;
}

template <typename T>
void Stack<T>::pop()
{
  if (m_top == nullptr)
  {
    throw(std::runtime_error ("Stack is empty."));
  }
  Node<T>* temp = m_top->getNext();
  delete m_top;
  m_top = temp;
}

template <typename T>
T Stack<T>::peek() const
{
  if (m_top == nullptr)
  {
    throw(std::runtime_error ("Stack is empty."));
  }
  return m_top->getEntry();
}

template <typename T>
bool Stack<T>::isEmpty() const
{
  return m_top == nullptr;
}
