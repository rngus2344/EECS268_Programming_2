/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file BST.cpp
* @date 7/22/2020
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

//public remove
template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::remove(KeyType key)
{
    if(contains(key) == false) throw(std::runtime_error("\nValue to be removed not found.\n\n"));
    m_root = remove(key, m_root);//this only changes m_root when the top BinaryNode is removed
}

//remove helper
template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::minValue(BinaryNode<ItemType>* subtree)
{
    int children = subtree -> hasChildren();
    //If: has a left child continue recursing
    if(children == -1 || children == 2) return( minValue(subtree -> getLeftChildPtr() ) );
    else return(subtree -> getItem() );//Else: min has been found, return it
}

//private remove
template <typename ItemType, typename KeyType>
BinaryNode<ItemType>* BST<ItemType, KeyType>::remove(KeyType key, BinaryNode<ItemType>* subtree)
{
    if(subtree -> getItem() == key)
    {
        int children = subtree -> hasChildren();
        if(children == 0)//no children
        {
            delete subtree;
            return(nullptr);
        }
        if(children == -1)//left child only
        {
            BinaryNode<ItemType>* temp = subtree -> getLeftChildPtr();
            delete subtree;
            return(temp);
        }
        if(children == 1)//right child only
        {
            BinaryNode<ItemType>* temp = subtree -> getRightChildPtr();
            return(temp);
        }
        if(children == 2)//two children
        {
            ItemType replacement = minValue(subtree -> getRightChildPtr() );
            remove(replacement.getID() );
            BinaryNode<ItemType>* temp = new BinaryNode<ItemType>(replacement);
            temp -> setLeftChildPtr(subtree -> getLeftChildPtr() );
            temp -> setRightChildPtr(subtree -> getRightChildPtr() );
            delete subtree;
            return(temp);
        }
    }
    else if(subtree -> getItem() > key)
    {
        if(subtree -> getLeftChildPtr() -> getItem() == key)//this step is done so that the program has access to the parent pointer
        {
            subtree -> setLeftChildPtr( remove(key, subtree -> getLeftChildPtr() ) );
        }
        else remove(key, subtree -> getLeftChildPtr() );
    }
    else
    {
        if( subtree -> getRightChildPtr() -> getItem() == key)
        {
            subtree -> setRightChildPtr( remove(key, subtree -> getRightChildPtr() ) );
        }
        else remove(key, subtree -> getRightChildPtr() );
    }
    return(m_root);
}

template <typename ItemType, typename KeyType>
bool BST<ItemType, KeyType>::contains(KeyType entry)
{
	return searchRecursive(entry, m_root) == entry;
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
		throw (std::runtime_error("Can't find key!\n"));
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
		throw(std::runtime_error("Can't find key!\n"));
	}
	else
  {
    throw(std::runtime_error("Can't find key!\n"));
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
			throw std::runtime_error("The entry already exists!\n");
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
			throw std::runtime_error("The entry already exists!\n");
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
void BST<ItemType, KeyType>::visitInOrder(void visit(ItemType)) const //Visits each BinaryNode in in order
{
	inRecursive(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::inRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const
{
	if (subTree != nullptr)
	{
		preRecursive(visit, subTree->getLeftChildPtr());
		visit(subTree->getItem());
		preRecursive(visit, subTree->getRightChildPtr());
	}
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPostOrder(void visit(ItemType)) const
{
	postRecursive(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::postRecursive(void visit(ItemType), BinaryNode<ItemType> *subTree) const
{
	if (subTree != nullptr)
	{
		preRecursive(visit, subTree->getLeftChildPtr());
		preRecursive(visit, subTree->getRightChildPtr());
		visit(subTree->getItem());
	}
}
