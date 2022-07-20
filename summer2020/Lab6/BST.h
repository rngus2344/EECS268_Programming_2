/* -----------------------------------------------------------------------------
* @author Guhyoun Nam
* @file BST.h
* @date 7/15/2020
* @brief header file of BST
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BST_H
#define BST_H

#include "BinaryNode.h"
#include "BSTInterface.h"
#include <stdexcept>

template <typename ItemType, typename KeyType>
class BST : public BSTInterface<ItemType, KeyType>
{
private:
	BinaryNode<ItemType> *m_root;

public:
	BST();
	~BST();
	void clear();
	void recClear(BinaryNode<ItemType> *subTree);
	ItemType search(KeyType key) const;
	ItemType searchRecursive(KeyType entry, BinaryNode<ItemType> *subTree) const;
	void add(ItemType entry);
	void addRecursive(ItemType entry, BinaryNode<ItemType> *subTree);
	bool contains(KeyType entry);
};

#include "BST.cpp"
#endif
