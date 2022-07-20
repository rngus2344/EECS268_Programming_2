/* -----------------------------------------------------------------------------
* @author Guhyoun Nam
* @file BST.h
* @date 7/22/2020
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
	BinaryNode<ItemType>* remove(KeyType key, BinaryNode<ItemType>* subtree);

public:
	BST();
	~BST();
	void clear();
	void recClear(BinaryNode<ItemType> *subTree);
	void remove(KeyType key);
	ItemType minValue(BinaryNode<ItemType>* subtree);
	ItemType search(KeyType key) const;
	ItemType searchRecursive(KeyType entry, BinaryNode<ItemType> *subTree) const;
	void add(ItemType entry);
	void addRecursive(ItemType entry, BinaryNode<ItemType> *subTree);
	bool contains(KeyType entry);
  void visitPreOrder(void visit(ItemType)) const;
  void preRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const;
  void visitInOrder(void visit(ItemType)) const; //Visits each node in in order
	void inRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const;
  void visitPostOrder(void visit(ItemType)) const; //Visits each node in post order
	void postRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const;
};

#include "BST.cpp"
#endif
