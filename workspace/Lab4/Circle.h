/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Circle.h
* @date 2/17/2020
* @brief header file of Circle
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle: public Shape
{
private:
  double m_radius;

public:
  /**
  * @pre None
  * @post Initialize m_radius to zero
  * @param None
  * @throw None
  **/
  Circle();

  /**
  * @pre None
  * @post Prints the area of the Circle
  * @param None
  * @throw ans
  **/
  double area() const;

  /**
  * @pre radius is valid
  * @post Sets the radius of the Circle
  * @param radius, copied to m_radius
  * @throw None
  **/
  void setRadius(double radius);

  /**
  * @pre None
  * @post Prints "Circle"
  * @param None
  * @throw "Circle"
  **/
  std::string shapeName() const;

  /**
  * @pre None
  * @post None
  * @param None
  * @throw None
  **/
  ~Circle();
};

#endif
