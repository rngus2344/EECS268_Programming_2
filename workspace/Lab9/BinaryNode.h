/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file BinaryNode.h
* @date 5/14/2020
* @brief header file of BinaryNode
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BINARYNODE_H
#define BINARYNODE_H

template <typename ItemType>
class BinaryNode
{
private:
  ItemType m_item;
  BinaryNode<ItemType> *m_leftChildPtr;
  BinaryNode<ItemType> *m_rightChildPtr;

public:
  BinaryNode();

  BinaryNode(const ItemType &anItem);

  BinaryNode(const ItemType &anItem, BinaryNode<ItemType> *leftPtr, BinaryNode<ItemType> *rightPtr);

  void setItem(const ItemType &anItem);

  ItemType getItem() const;

  void setLeftChildPtr(BinaryNode<ItemType> *leftPtr);

  void setRightChildPtr(BinaryNode<ItemType> *rightPtr);

  BinaryNode<ItemType> *getLeftChildPtr() const;

  BinaryNode<ItemType> *getRightChildPtr() const;
};

#include "BinaryNode.cpp"

#endif
