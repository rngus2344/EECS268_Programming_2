/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.h
* @date 6/8/2020
* @brief h file of Executive
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Game.h"
#include <string>

class Executive
{
private:
  Game* all_games;
  int m_size;
  std::string m_fileName;

public:
  /**
  * @pre FileName is valid.
  * @param File with the fileName must have right data.
  * @post Creates an array of Game of the given m_size with the data from the file.
  */
  Executive(std::string fileName);

  /**
  * @pre None.
  * @post The array created by this object is deleted.
  */
  ~Executive();

  /**
  * @pre None.
  * @post Print the menu and interact with the user.
  */
  void run();

  /**
  * @pre None.
  * @post Print all the games.
  */
  void print();
};
#endif
