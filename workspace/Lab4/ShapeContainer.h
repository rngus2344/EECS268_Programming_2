/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file ShapeContainer.h
* @date 2/17/2020
* @brief header file of ShapeContainer
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "Shape.h"
#include <stdexcept>

class ShapeContainer
{
private:
  Shape** m_arrayOfShapes;
  int m_size;

public:
  /**
  * @pre size is valid
  * @post Initialize pointers in m_arrayOfShapes to nullptr
  * @param size, size of the m_arrayOfShapes
  * @throw None
  **/
  ShapeContainer(int size);

  /**
  * @pre Copy constructor constructed a m_arrayOfShapes
  * @post Delete m_arrayOfShapes
  * @param None
  * @throw None
  **/
  ~ShapeContainer();

  /**
  * @pre index is valid
  * @post Prints the area of the shape of the given index
  * @param index, decides which index to print the area of the shape
  * @throw Throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
  **/
  double area(int index) const;

  /**
  * @pre index is valid
  * @post Prints the name of the shape of given index
  * @param index, decides which index to print the name of the shape
  * @throw Throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
  **/
  std::string shapeName(int index) const;

  /**
  * @pre index is valid, shapePtr is not empty
  * @post Adds a shape to the given index of the m_arrayOfShapes
  * @param shapePtr, index, adds a shapePtr to the given index of the m_arrayOfShapes
  * @throw Throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
  **/
  void add(Shape* shapePtr, int index);

  /**
  * @pre index is valid
  * @post Removes a shape from the given index of the m_arrayOfShapes
  * @param index, decides which index to remove the shape
  * @throw Throws a std::runtime_error if the index is invalid OR there is no object to delete
  **/
  void remove(int index);
};

#endif
