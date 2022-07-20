#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include "ListInterface.h"
#include <stdexcept> //For runtime_error

template <typename T>
class LinkedList : public ListInterface<T>
{
     private:
     Node<T>* m_front;
     int m_length;

     public:
     LinkedList();
     LinkedList(const LinkedList<T> & orig);
     ~LinkedList();
     void operator=(const LinkedList& original);
     bool isEmpty() const;
     int getLength() const;
     void insert(int position, T entry);  //can throw runtime_error
     void remove(int position); //can throw runtime_error
     void clear();
     T getEntry(int index) const; //can throw runtime_error
     void replace(int position, T newEntry); //can throw runtime_error
};
#include "LinkedList.cpp"
#endif

// template <typename T>
// class LinkedList: public ListInterface<T>
// {
// private:
//   int m_length;
//   Node<T>* m_front = nullptr;
//
// public:
//   LinkedList();
//   LinkedList(const LinkedList<T> & orig);
//   ~LinkedList();
//   void insert(int index, T entry);
//   void remove(int index);
//   int getLength() const;
//   void setLength(int length);
//   T getEntry(int index);
//   void setEntry(int index, T entry);
//   void clear();
// };
//
// #include "LinkedList.cpp"
// #endif
