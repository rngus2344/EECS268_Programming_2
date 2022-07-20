/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.cpp
* @date 6/8/2020
* @brief cpp file of Executive
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Executive.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <limits>

Executive::Executive(std::string fileName)
{
  m_fileName = fileName;
  std::string gameName = "Something";
  double gRating = 0.0;
  double pRating = 0.0;
  int pYear = 0;
  int mPlayers = 0;
  int mPlaytime = 0;

  std::ifstream inFile;

  inFile.open(fileName);
  if(inFile.is_open())
  {
    inFile >> m_size;
    all_games = new Game[m_size];

    for(int i=0; i<m_size; i++)
    {
      inFile >> gameName >> gRating >> pRating >> pYear >> mPlayers >> mPlaytime;
      all_games[i] = Game(gameName, gRating, pRating, pYear, mPlayers, mPlaytime);
    }
    inFile.close();
  }
  else
  {
    throw(std::runtime_error("The file could not be opened.\n"));
  }
}

Executive::~Executive()
{
  delete[] all_games;
}

void Executive::run()
{
  int opt=0;
  do
  {
    std::cout << "Select an option:\n1) Print all games\n2) Print all games from year (obtain a year and print all the games from that year)\n";
    std::cout << "3) Print a ranking range (obtain a ranking range and print all games in that ranking range (Gibbons rating))\n";
    std::cout << "4) The people VS Dr. Gibbons (obtain a number and print all games where the people's rating are separated by that much or more)\n";
    std::cout << "5) Find a game to play (obtain a min player count and min playtime, then print all games that support at least that number of playes and required at least that much time to play)";
    std::cout << "\n6) Exit the program\nEnter your choice: ";
    std::cin >> opt;

    while(std::cin.fail())
    {
      std::cin.clear(); // unset failbit
      // skip bad input up to the next newline
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Sorry, your input did not seem to be an int. Try again: ";
      std::cin >> opt;
    }
    // Flush out anything left in the stream (e.g. if they type 2.5 for an int
    // the .5 would still be therestd::cout << "Exit program.\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "You entered: " << opt << '\n';

    if(opt==1)
    {
      std::cout << '\n';
      print();
      std::cout << '\n';
    }
    else if(opt==2)
    {
      int year=0, count=0;
      std::cout << "Input a year: ";
      std::cin >> year;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> year;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << year << "\n\n";

      for(int i=0; i<m_size; i++)
      {
        if(all_games[i].getPYear()==year)
        {
          std::cout << all_games[i].getName() << " (" << all_games[i].getPYear() << ") [GR=" << all_games[i].getGRating();
          std::cout << ", PR=" << all_games[i].getPRating() << ", MP=" << all_games[i].getMPlayers() << ", MT=";
          std::cout << all_games[i].getMPlaytime() << "]\n";
        }
        else
        {
          count++;
        }
      }
      if(count==m_size)
      {
        std::cout << "No games found.\n";
      }
      std::cout << '\n';
    }
    else if(opt==3)
    {
      int rangeMin=0, rangeMax=0,count=0;
      std::cout << "Input a smaller range value: ";
      std::cin >> rangeMin;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> rangeMin;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << rangeMin << "\n\n";

      std::cout << "Input a larger range value: ";
      std::cin >> rangeMax;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> rangeMax;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << rangeMax << "\n\n";

      for(int i=0; i<m_size; i++)
      {
        if(all_games[i].getGRating()>=rangeMin && all_games[i].getGRating()<=rangeMax)
        {
          std::cout << all_games[i].getName() << " (" << all_games[i].getPYear() << ") [GR=" << all_games[i].getGRating();
          std::cout << ", PR=" << all_games[i].getPRating() << ", MP=" << all_games[i].getMPlayers() << ", MT=";
          std::cout << all_games[i].getMPlaytime() << "]\n";
        }
        else
        {
          count++;
        }
      }
      if(count==m_size)
      {
        std::cout << "No games found.\n";
      }
      std::cout << '\n';
    }
    else if(opt==4)
    {
      int count=0;
      double differ=0.0;
      std::cout << "Input a number: ";
      std::cin >> differ;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> differ;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << differ << "\n\n";

      for(int i=0; i<m_size; i++)
      {
        if(all_games[i].getGRating()-all_games[i].getPRating()>=differ||all_games[i].getPRating()-all_games[i].getGRating()>=differ)
        {
          std::cout << all_games[i].getName() << " (" << all_games[i].getPYear() << ") [GR=" << all_games[i].getGRating();
          std::cout << ", PR=" << all_games[i].getPRating() << ", MP=" << all_games[i].getMPlayers() << ", MT=";
          std::cout << all_games[i].getMPlaytime() << "]\n";
        }
        else
        {
          count++;
        }
      }
      if(count==m_size)
      {
        std::cout << "No games found.\n";
      }
      std::cout << '\n';
    }
    else if(opt==5)
    {
      int userMPlayers=0, userMPlaytime=0, count=0;
      std::cout << "Input a preferred minimum number of players: ";
      std::cin >> userMPlayers;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> userMPlayers;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << userMPlayers << "\n\n";

      std::cout << "Input preferred minimum playtime: ";
      std::cin >> userMPlaytime;

      while(std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Sorry, your input did not seem to be an int. Try again: ";
        std::cin >> userMPlaytime;
      }
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "You entered: " << userMPlaytime << "\n\n";

      for(int i=0; i<m_size; i++)
      {
        if(all_games[i].getMPlayers()>=userMPlayers && all_games[i].getMPlaytime()>=userMPlaytime)
        {
          std::cout << all_games[i].getName() << " (" << all_games[i].getPYear() << ") [GR=" << all_games[i].getGRating();
          std::cout << ", PR=" << all_games[i].getPRating() << ", MP=" << all_games[i].getMPlayers() << ", MT=";
          std::cout << all_games[i].getMPlaytime() << "]\n";
        }
        else
        {
          count++;
        }
        if(count==m_size)
        {
          std::cout << "No games found.\n";
        }
      }
      std::cout << '\n';
    }
    else if(opt>6||opt<1)
    {
      std::cout << "Invalid input.\n";
    }
  } while(opt!=6);
  {
    std::cout << "Exit the program.\n";
  }
}

void Executive::print()
{
  for(int i=0; i<m_size; i++)
  {
    std::cout << all_games[i].getName() << " (" << all_games[i].getPYear() << ") [GR=" << all_games[i].getGRating();
    std::cout << ", PR=" << all_games[i].getPRating() << ", MP=" << all_games[i].getMPlayers() << ", MT=";
    std::cout << all_games[i].getMPlaytime() << "]\n";
  }
}
