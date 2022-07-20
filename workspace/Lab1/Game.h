/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Game.h
* @date 6/8/2020
* @brief h file of Game
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef GAME_H
#define GAME_H
#include <string>

class Game
{
private:
  std::string game_name;
  double g_rating;
  double p_rating;
  int p_year;
  int m_players;
  int m_playtime;

public:
  /**
  * @pre None.
  * @post Creates an uninitialized Game object.
  */
  Game();

  /**
  * @pre None.
  * @post Creates a Game object with the date.
  * @param gameName, gRating, pRating, pYear, mPlayers, and mPlaytime are copied.
  */
  Game(std::string gameName, double gRating, double pRating, int pYear, int mPlayers, int mPlaytime);

  /**
  * @pre None.
  * @post None.
  * @return Returns game_name.
  */
  std::string getName();

  /**
  * @pre None.
  * @post None.
  * @return Returns g_rating.
  */
  double getGRating();

  /**
  * @pre None.
  * @post None.
  * @return Returns p_rating.
  */
  double getPRating();

  /**
  * @pre None.
  * @post None.
  * @return Returns p_year.
  */
  int getPYear();

  /**
  * @pre None.
  * @post None.
  * @return Returns m_players.
  */
  int getMPlayers();

  /**
  * @pre None.
  * @post None.
  * @return Returns m_playtime.
  */
  int getMPlaytime();

  /**
  * @pre None.
  * @post Sets the game_name.
  * @param None.
  */
  void setGameName(std::string gameName);

  /**
  * @pre None.
  * @post Sets the g_rating.
  * @param None.
  */
  void setGRating(double gRating);

  /**
  * @pre None.
  * @post Sets a p_rating.
  * @param None.
  */
  void setPRating(double pRating);

  /**
  * @pre None.
  * @post Sets a p_year.
  * @param None.
  */
  void setPYear(int pYear);

  /**
  * @pre None.
  * @post Sets a m_players.
  * @param None.
  */
  void setMPlayers(int mPlayers);

  /**
  * @pre None.
  * @post Sets a m_playtime.
  * @param None.
  */
  void setMPlaytime(int mPlaytime);
};
#endif
