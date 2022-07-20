/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file BST.cpp
* @date 5/14/2020
* @brief cpp file of BST
 ---------------------------------------------------------------------------- */
template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST()
{
	m_root = nullptr;
}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::~BST()
{
	clear();
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::clear()
{
	recClear(m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::recClear(BinaryNode<ItemType> *subTree)
{
	if (subTree != nullptr)
	{
		if (subTree->getLeftChildPtr() != nullptr)
		{
			recClear(subTree->getLeftChildPtr());
		}
		if (subTree->getRightChildPtr() != nullptr)
		{
			recClear(subTree->getRightChildPtr());
		}
		delete subTree;
		subTree = nullptr;
	}
	else
	{
		m_root = nullptr;
	}
}

template <typename ItemType, typename KeyType>
bool BST<ItemType, KeyType>::contains(KeyType entry)
{
	return entry == searchRecursive(entry, m_root);
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::search(KeyType key) const
{
	try
	{
		return searchRecursive(key, m_root);
	}
	catch (std::exception &exc)
	{
		throw std::exception(exc);
	}
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::searchRecursive(KeyType key, BinaryNode<ItemType> *subTree) const
{
	if (subTree != nullptr)
	{
		if (subTree->getItem() == key)
		{
			return subTree->getItem();
		}
		if (subTree->getRightChildPtr() != nullptr || subTree->getLeftChildPtr() != nullptr)
		{
			if (subTree->getItem() > key && subTree->getLeftChildPtr() != nullptr)
			{
				return searchRecursive(key, subTree->getLeftChildPtr());
			}
			else if (subTree->getItem() < key && subTree->getRightChildPtr() != nullptr)
			{
				return searchRecursive(key, subTree->getRightChildPtr());
			}
		}
		throw(std::runtime_error("Can't find key!"));
	}
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::add(ItemType entry)
{
	//check for a completely empty tree
	if (m_root == nullptr)
	{
		m_root = new BinaryNode<ItemType>(entry);
	}
	else
	{
		try
		{
			addRecursive(entry, m_root);
		}
		catch (std::exception exc)
		{
			throw std::exception(exc);
		}
	}
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::addRecursive(ItemType entry, BinaryNode<ItemType> *subTree)
{
	if (subTree != nullptr)
	{
		if (subTree->getItem() > entry)
		{
			if (subTree->getLeftChildPtr() != nullptr)
			{
				addRecursive(entry, subTree->getLeftChildPtr());
			}
			else
			{
				BinaryNode<ItemType> *temp = new BinaryNode<ItemType>(entry);
				subTree->setLeftChildPtr(temp);
				return;
			}
		}
		else if (subTree->getItem() < entry)
		{
			if (subTree->getRightChildPtr() != nullptr)
			{
				addRecursive(entry, subTree->getRightChildPtr());
			}
			else
			{
				BinaryNode<ItemType> *temp = new BinaryNode<ItemType>(entry);
				subTree->setRightChildPtr(temp);
				return;
			}
		}
		else
		{
			throw std::runtime_error("The entry already exists!");
		}
	}
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPreOrder(void visit(ItemType)) const
{
	preRecursive(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::preRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const
{
	if (subTree != nullptr)
	{
		visit(subTree->getItem());
		preRecursive(visit, subTree->getLeftChildPtr());
		preRecursive(visit, subTree->getRightChildPtr());
	}
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitInOrder(void visit(ItemType)) const //Visits each node in in order
{

}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPostOrder(void visit(ItemType)) const
{

}
