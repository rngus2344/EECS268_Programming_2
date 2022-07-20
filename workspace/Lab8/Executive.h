/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.h
* @date 5/14/2020
* @brief header file of Executive
---------------------------------------------------------------------------- */

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Pokemon.h"
#include "BST.h"
#include <fstream>

class Executive
{
private:
  BST<Pokemon, int> pokemons;
  Pokemon pokemon;
  std::string us, jp, temp_id;
  int id;

public:
  Executive(std::string fileName);
  void run();
  void search();
  void add();
};

#endif
