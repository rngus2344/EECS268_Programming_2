/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Triangle.cpp
* @date 2/17/2020
* @brief cpp file of Triangle
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Triangle.h"

Triangle::Triangle()
{
  m_base = 0;
  m_height = 0;
}

double Triangle::area() const
{
  double ans=0;
  ans=0.5*m_base*m_height;
  return(ans);
}

void Triangle::setBase(double base)
{
  m_base = base;
}

void Triangle::setHeight(double height)
{
  m_height = height;
}

std::string Triangle::shapeName() const
{
  return("Triangle");
}

Triangle::~Triangle()
{}
