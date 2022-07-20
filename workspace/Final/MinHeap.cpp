MinHeap::MinHeap()
{
  m_arraySize = 0;
}

void MinHeap::upheap(int index)
{
  int temp = 0;
  if(index==0)
  {
    return;
  }
  else
  {
    if(m_array[index-1] > m_array[index])
    {
      temp = m_array[index-1];
      m_array[index-1] = m_array[index];
      m_array[index] = temp;
      upheap(index-1);
    }
    else
    {
      upheap(index-1);
    }
  }
}

void MinHeap::add()
{
  
}

void MinHeap::print()
{
  std::cout << m_array[0] << ", " << m_array[1] << ", " << m_array[2] << ", ";
  std::cout << m_array[3] << ", " << m_array[4] << '\n';
}
