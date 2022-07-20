/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Triangle.h
* @date 2/17/2020
* @brief header file of Triangle
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle: public Shape
{
private:
  double m_base;
  double m_height;

public:
  /**
  * @pre None
  * @post Initialize m_base and m_height to zero
  * @param None
  * @throw None
  **/
  Triangle();

  /**
  * @pre None
  * @post Prints the area of the Triangle
  * @param None
  * @throw ans
  **/
  double area() const;

  /**
  * @pre base is valid
  * @post Sets the base of the Triangle
  * @param base, copied to m_base
  * @throw None
  **/
  void setBase(double base);

  /**
  * @pre height is valid
  * @post Sets the height of the Triangle
  * @param base, copied to m_height
  * @throw None
  **/
  void setHeight(double height);

  /**
  * @pre None
  * @post Prints "Triangle"
  * @param None
  * @throw "Triangle"
  **/
  std::string shapeName() const;

  /**
  * @pre None
  * @post None
  * @param None
  * @throw None
  **/
  ~Triangle();
};

#endif
