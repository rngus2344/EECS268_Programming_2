/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Pokemon.h
* @date 7/22/2020
* @brief header file of Pokemon
---------------------------------------------------------------------------- */
//Start your program.

#ifndef POKEMON_H
#define POKEMON_H

#pragma once
#include <string>
#include <iostream>

class Pokemon
{
private:
  std::string m_nameUS, m_nameJP;
  int m_id;

public:
  Pokemon();
  Pokemon(std::string nameUS, int id, std::string nameJP);
  int getID();
  std::string getUS();
  std::string getJP();

  void setID(int id);
  void setUS(std::string us);
  void setJP(std::string jp);

  bool operator<(const Pokemon &rhs);
  bool operator<(const int &rhs);

  bool operator>(const Pokemon &rhs);
  bool operator>(const int &rhs);

  bool operator==(const Pokemon &rhs);
  bool operator==(const int &rhs);

  friend std::ostream &operator<<(std::ostream &os, Pokemon &rhs);
};

#endif
