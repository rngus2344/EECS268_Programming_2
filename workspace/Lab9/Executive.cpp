/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Executive.cpp
* @date 5/14/2020
* @brief cpp file of Executive
---------------------------------------------------------------------------- */
#include "Executive.h"

Executive::Executive(std::string fileName)
{
  std::ifstream read_file;
  read_file.open(fileName);
  while (!read_file.eof())
  {
    getline(read_file, us, '\t');
    getline(read_file, temp_id, '\t');
    getline(read_file, jp, '\n');
    id = stoi(temp_id);
    pokemon.setUS(us);
    pokemon.setJP(jp);
    pokemon.setID(id);
    pokemons.add(pokemon);
  }
}

void Executive::run()
{
  int choice;
  while (true)
  {
    std::cout << "1. Search" << std::endl;
    std::cout << "2. Add" << std::endl;
    std::cout << "3. Copy" << std::endl;
    std::cout << "4. Remove" << std::endl;
    std::cout << "5. Print" << std::endl;
    std::cout << "6. Quit" << std::endl;
    std::cout << "Choose a value: ";
    std::cin >> choice;

    if (choice == 1)
    {
      search();
    }
    else if (choice == 2)
    {
      add();
    }
    else if (choice == 3)
    {

    }
    else if (choice == 4)
    {

    }
    else if (choice == 5)
    {

    }
      else if (choice == 6)
    {
      break;
    }
  }
}

void Executive::search()
{
  int temp;
  std::cout << "Give an id of a pokemon: ";
  std::cin >> temp;
  try
  {
    Pokemon temp_p = pokemons.search(temp);
    std::cout << temp_p.getUS() << ", " << temp_p.getJP() << ", " << temp_p.getID() << std::endl;
  }
  catch (std::exception &exc)
  {
    std::cout << exc.what() << std::endl;
  }
}

void Executive::add()
{
  Pokemon temp_p;
  std::string temp_us, temp_jp;
  int temp, ans;

  std::cout << "Enter the name of the pokemon in American: ";
  std::cin >> temp_us;
  std::cout << "Enter the name of the pokemon in Japanese: ";
  std::cin >> temp_jp;
  std::cout << "Enter the id: ";
  std::cin >> temp;

  temp_p.setUS(temp_us);
  temp_p.setJP(temp_jp);
  temp_p.setID(temp);

  try
  {
    pokemons.add(temp_p);
  }
  catch (std::exception &exc)
  {
    std::cout << exc.what() << std::endl;
  }
}

void Executive::Copy()
{

}

void Executive::remove()
{
//   Pokemon temp_p;
//   int temp, ans;
//
//   std::cout << "Enter the id: ";
//   std::cin >> temp;
//
//   temp_p.setUS(temp_us);
//   temp_p.setJP(temp_jp);
//   temp_p.setID(temp);
//
//   try
//   {
//     pokemons.add(temp_p);
//   }
//   catch (std::exception &exc)
//   {
//     std::cout << exc.what() << std::endl;
//   }
}

// void Executive::print()
// {
//   pokemons.visitInOrder(subPrint);
// }
//
// void Executive::subPrint(std::string item)
// {
//   std::cout << item << std::endl;
// }
