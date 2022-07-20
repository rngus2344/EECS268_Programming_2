/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file ShapeContainer.cpp
* @date 2/17/2020
* @brief cpp file of ShapeContainer
 ---------------------------------------------------------------------------- */
//Start your program.
#include "ShapeContainer.h"

//initialize pointers in m_arrayOfShapes to nullptr
ShapeContainer::ShapeContainer(int size)
{
  m_size = size;
  m_arrayOfShapes = new Shape*[size];
  for (int i = 0; i < size; i++) {
    m_arrayOfShapes[i] = nullptr;
  }
}

ShapeContainer::~ShapeContainer()
{
  delete[] m_arrayOfShapes;
}

//throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
double ShapeContainer::area(int index) const
{
  if(index<0 || index >= m_size)
  {
    throw(std::runtime_error ("Out of range."));
  }
  else if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error ("Does not exist."));
  }
  else
  {
    return(m_arrayOfShapes[index]->area());
  }
}

//throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
std::string ShapeContainer::shapeName(int index) const
{
  if(index<0 || index >= m_size)
  {
    throw(std::runtime_error ("Out of range."));
  }
  else if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error ("Does not exist."));
  }
  else
  {
    return(m_arrayOfShapes[index]->shapeName());
  }
}

//throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
void ShapeContainer::add(Shape* shapePtr, int index)
{
  if(index<0 || index >= m_size)
  {
    throw(std::runtime_error ("Out of range."));
  }
  else if(shapePtr == nullptr)
  {
    throw(std::runtime_error ("Does not exist."));
  }
  else
  {
    m_arrayOfShapes[index] = shapePtr;
  }
}

//throws a std::runtime_error if the index is invalid OR there is no object to delete
void ShapeContainer::remove(int index)
{
  if(index<0 || index >= m_size)
  {
    throw(std::runtime_error ("Out of range."));
  }
  else if(m_arrayOfShapes[index] == nullptr)
  {
    throw(std::runtime_error ("Nothing to remove."));
  }
  else
  {
    m_arrayOfShapes[index] = nullptr;
  }
}
