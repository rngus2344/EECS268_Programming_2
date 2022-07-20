/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.h
* @date 2/17/2020
* @brief header file of Executive
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "ShapeContainer.h"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <string>

class Executive
{
private:
  Circle* circ;
  Triangle* tri;
  Rectangle* rec;

public:
  /**
  * @pre None
  * @post Reads the file with the given filename and follows the direction in the file
  * @param fileName, name of the file to open
  * @throw None
  **/
  Executive(std::string fileName);

  /**
  * @pre circ, tri, and rec are created
  * @post Delete circ, tri, and rec
  * @param None
  * @throw None
  **/
  ~Executive();
};

#endif
