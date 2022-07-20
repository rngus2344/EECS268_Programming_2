/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Game.cpp
* @date 6/8/2020
* @brief cpp file of Game
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Game.h"

Game::Game()
{
  game_name = "Something";
  g_rating = 0.0;
  p_rating = 0.0;
  p_year = 0;
  m_players = 0;
  m_playtime = 0;
}

Game::Game(std::string gameName, double gRating, double pRating, int pYear, int mPlayers, int mPlaytime)
{
  game_name = gameName;
  g_rating = gRating;
  p_rating = pRating;
  p_year = pYear;
  m_players = mPlayers;
  m_playtime = mPlaytime;
}

std::string Game::getName()
{
  return(game_name);
}

double Game::getGRating()
{
  return(g_rating);
}

double Game::getPRating()
{
  return(p_rating);
}

int Game::getPYear()
{
  return(p_year);
}

int Game::getMPlayers()
{
  return(m_players);
}

int Game::getMPlaytime()
{
  return(m_playtime);
}

void Game::setGameName(std::string gameName)
{
  game_name = gameName;
}

void Game::setGRating(double gRating)
{
  g_rating = gRating;
}

void Game::setPRating(double pRating)
{
  p_rating = pRating;
}

void Game::setPYear(int pYear)
{
  p_year = pYear;
}

void Game::setMPlayers(int mPlayers)
{
  m_players = mPlayers;
}

void Game::setMPlaytime(int mPlaytime)
{
  m_playtime = mPlaytime;
}
