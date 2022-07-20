/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Circle.cpp
* @date 2/17/2020
* @brief cpp file of Circle
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Circle.h"

Circle::Circle()
{
  m_radius = 0;
}

double Circle::area() const
{
  double ans=0;
  ans=3.14159*m_radius*m_radius;
  return(ans);
}

void Circle::setRadius(double radius)
{
  m_radius=radius;
}

std::string Circle::shapeName() const
{
  return("Circle");
}

Circle::~Circle()
{}
