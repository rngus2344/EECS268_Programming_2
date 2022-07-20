#ifndef MINHEAP_H
#define MINHEAP_H
#include <iostream>
#include <array>

class MinHeap
{
private:
  int m_arraySize;
	int m_heapSize;
	int m_array[5] = {5,13,2,40,1};

public:
  MinHeap();
  void add();
  void print();
  void upheap(int index);
};

#include "MinHeap.cpp"
#endif
