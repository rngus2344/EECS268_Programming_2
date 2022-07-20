/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file BinaryNode.cpp
* @date 5/14/2020
* @brief cpp file of BinaryNode
 ---------------------------------------------------------------------------- */
//Start your program.

template <typename ItemType>
BinaryNode<ItemType>::BinaryNode()
{
   m_item = NULL;
   m_leftChildPtr = NULL;
   m_rightChildPtr = NULL;
}

template <typename ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType &anItem)
{
   m_item = anItem;
   m_leftChildPtr = nullptr;
   m_rightChildPtr = nullptr;
}

template <typename ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType &anItem, BinaryNode<ItemType> *leftPtr, BinaryNode<ItemType> *rightPtr)
{
   m_item = anItem;
   m_leftChildPtr = leftPtr;
   m_rightChildPtr = rightPtr;
}

template <typename ItemType>
void BinaryNode<ItemType>::setItem(const ItemType &anItem)
{
   m_item = anItem;
}

template <typename ItemType>
ItemType BinaryNode<ItemType>::getItem() const
{
   return (m_item);
}

template <typename ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(BinaryNode<ItemType> *leftPtr)
{
   m_leftChildPtr = leftPtr;
}

template <typename ItemType>
void BinaryNode<ItemType>::setRightChildPtr(BinaryNode<ItemType> *rightPtr)
{
   m_rightChildPtr = rightPtr;
}

template <typename ItemType>
BinaryNode<ItemType> *BinaryNode<ItemType>::getLeftChildPtr() const
{
   return (m_leftChildPtr);
}

template <typename ItemType>
BinaryNode<ItemType> *BinaryNode<ItemType>::getRightChildPtr() const
{
   return (m_rightChildPtr);
}
