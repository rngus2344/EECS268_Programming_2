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
   //More methods to come in next lab
 };

 #endif
