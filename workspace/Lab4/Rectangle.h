/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Rectangle.h
* @date 2/17/2020
* @brief header file of Rectangle
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape
{
private:
  double m_length;
  double m_width;

public:
  /**
  * @pre None
  * @post Initialize m_length and m_width to zero
  * @param None
  * @throw None
  **/
  Rectangle();

  /**
  * @pre None
  * @post Prints the area of the Rectangle
  * @param None
  * @throw ans
  **/
  double area() const;

  /**
  * @pre length is valid
  * @post Sets the length of the Rectangle
  * @param length, copied to m_length
  * @throw None
  **/
  void setLength(double length);

  /**
  * @pre width is valid
  * @post Sets the width of the Rectangle
  * @param width, copied to m_width
  * @throw None
  **/
  void setWidth(double width);

  /**
  * @pre None
  * @post Prints "Rectangle"
  * @param None
  * @throw "Rectangle"
  **/
  std::string shapeName() const;

  /**
  * @pre None
  * @post None
  * @param None
  * @throw None
  **/
  ~Rectangle();
};

#endif
