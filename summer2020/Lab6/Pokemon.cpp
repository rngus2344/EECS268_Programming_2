/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Pokemon.cpp
* @date 7/15/2020
* @brief cpp file of Pokemon
---------------------------------------------------------------------------- */
//Start your program.

#include "Pokemon.h"

Pokemon::Pokemon()
{
  m_nameUS = "";
  m_id = 0;
  m_nameJP = "";
}

Pokemon::Pokemon(std::string nameUS, int id, std::string nameJP)
{
  m_nameUS = nameUS;
  m_id = id;
  m_nameJP = nameJP;
}

int Pokemon::getID()
{
  return (m_id);
}

void Pokemon::setID(int id)
{
  this->m_id = id;
}

std::string Pokemon::getUS()
{
  return m_nameUS;
}

void Pokemon::setUS(std::string us)
{
  this->m_nameUS = us;
}

std::string Pokemon::getJP()
{
  return m_nameJP;
}

void Pokemon::setJP(std::string jp)
{
  this->m_nameJP = jp;
}

bool Pokemon::operator<(const Pokemon &rhs)
{
  return this->m_id < rhs.m_id;
}

bool Pokemon::operator<(const int &rhs)
{
  return this->m_id < rhs;
}

bool Pokemon::operator>(const Pokemon &rhs)
{
  return this->m_id > rhs.m_id;
}

bool Pokemon::operator>(const int &rhs)
{
  return this->m_id > rhs;
}

std::ostream &operator<<(std::ostream &os, Pokemon &rhs)
{
  os << rhs.m_id << " " << rhs.getUS() << " " << rhs.getJP() << std::endl;
  return os;
}

bool Pokemon::operator==(const Pokemon &rhs)
{
  return this->m_id == rhs.m_id;
}

bool Pokemon::operator==(const int &rhs)
{
  return this->m_id == rhs;
}
