/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Rectangle.cpp
* @date 2/17/2020
* @brief cpp file of Rectangle
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Rectangle.h"

Rectangle::Rectangle()
{
  m_length = 0;
  m_width = 0;
}

double Rectangle::area() const
{
  double ans=0;
  ans=m_length*m_width;
  return(ans);
}

void Rectangle::setLength(double length)
{
  m_length = length;
}

void Rectangle::setWidth(double width)
{
  m_width = width;
}

std::string Rectangle::shapeName() const
{
  return("Rectangle");
}

Rectangle::~Rectangle()
{}
