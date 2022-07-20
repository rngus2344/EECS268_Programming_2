/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Shape.h
* @date 2/17/2020
* @brief header file of Shape
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
public:
  /**
  * @pre Shape is constructed
  * @post Prints the area of the Shape
  * @param None
  * @throw None
  **/
  virtual double area() const = 0;

  /**
  * @pre Shape is constructed
  * @post Prints the name of the Shape
  * @param None
  * @throw None
  **/
  virtual std::string shapeName() const = 0;

  /**
  * @pre Shape is constructed
  * @post Destructs the Shape
  * @param None
  * @throw None
  **/
  virtual ~Shape() {}
};

#endif
