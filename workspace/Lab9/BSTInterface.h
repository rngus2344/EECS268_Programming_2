/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file BSTInterface.h
* @date 5/14/2020
* @brief header file of BSTInterface
 ---------------------------------------------------------------------------- */

 #ifndef BSTINTERFACE_H
 #define BSTINTERFACE_H

 template <typename ItemType, typename KeyType>
 class BSTInterface
 {
 public:
   virtual ~BSTInterface(){};
   virtual void add(ItemType entry) = 0;
   virtual ItemType search(KeyType key) const = 0;
   virtual void clear() = 0;
   //For the following methods, each method will take a function as a parameter
   //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
   //The function you pass in will need to a static method
   virtual void visitPreOrder(void visit(ItemType)) const = 0; //Visits each node in pre order
   virtual void visitInOrder(void visit(ItemType)) const = 0; //Visits each node in in order
   virtual void visitPostOrder(void visit(ItemType)) const = 0; //Visits each node in post order
 };

 #endif
