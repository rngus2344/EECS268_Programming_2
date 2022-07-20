/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file Blob.cpp
* @date 6/30/2020
* @brief cpp file of Blob
 ---------------------------------------------------------------------------- */
//Start your program.
#include "Blob.h"
#include <iostream>
#include <fstream>
#include <string>

Blob::Blob(std::string fileName)
{
  std::ifstream inFile;
  inFile.open(fileName);
  if (inFile.fail())
  {
    std::cout << "File does not exist.\n";
    return;
  }

  inFile >> m_numRows >> m_numCols >> m_startRow >> m_startCol;

  if(m_numRows < 1 || m_numCols < 1)
  {
    std::cout << "Number of rows or columns cannot be less than 1.\n";
    return;
  }
  if(m_startRow>m_numRows-1 || m_startRow<0 || m_startCol>m_numCols-1 || m_startCol<0)
  {
    std::cout << "Start position is not within range.\n";
    return;
  }
  else
  {
    m_maze = new char*[m_numRows];
    for(int i=0; i<m_numRows; i++)
    {
      m_maze[i] = new char[m_numCols];
    }
    for(int i=0; i<m_numRows; i++)
    {
      for(int j=0; j<m_numCols; j++)
      {
        inFile >> m_maze[i][j];
      }
    }

    m_visited = new int*[m_numRows];
    for(int i=0; i<m_numRows; i++)
    {
      m_visited[i] = new int[m_numCols];
    }
    for(int i=0; i<m_numRows; i++)
    {
      for(int j=0; j<m_numCols; j++)
      {
        m_visited[i][j] = 0;
      }
    }
  }
  inFile.close();
  moveTo(m_startRow, m_startCol);
  printOutput();
}

void Blob::moveTo(int row, int col)
{
  mark(row, col);
  if(!isOff(row-1, col))
  {
    if(isSewer(row, col))
    {
      for(int i=0; i<m_numRows; i++)
      {
        for(int j=0; j<m_numCols; j++)
        {
          if(m_visited[i][j] == 0)
          {
            if(isSewer(i, j))
            {
              moveTo(i, j);
            }
          }
        }
      }
    }
  }
  if(!isOff(row-1, col))
  {
    if(m_visited[row-1][col] == 0 && isStreet(row-1, col))
    {
      moveTo(row-1, col);
    }
    else if(isSewer(row-1, col))
    {
      moveTo(row-1, col);
    }
  }
  if(!isOff(row, col+1))
  {
    if(m_visited[row][col+1] == 0 && isStreet(row, col+1))
    {
      moveTo(row, col+1);
    }
    else if(isSewer(row, col+1))
    {
      moveTo(row, col+1);
    }
  }
  if(!isOff(row+1, col))
  {
    if(m_visited[row+1][col] == 0 && isStreet(row+1, col))
    {
      moveTo(row+1, col);
    }
    else if(isSewer(row+1, col))
    {
      moveTo(row+1, col);
    }
  }
  if(!isOff(row, col-1))
  {
    if(m_visited[row][col-1] == 0 && isStreet(row, col-1))
    {
      moveTo(row, col-1);
    }
    else if(isSewer(row, col-1))
    {
      moveTo(row, col-1);
    }
  }
}

void Blob::mark(int row, int col)
{
  if(isStreet(row, col))
  {
    m_maze[row][col] = 'B';
    m_visited[row][col] = 1;
  }
  else if(isSewer(row, col))
  {
    m_visited[row][col] = 1;
  }
  else
  {
    return;
  }
}

void Blob::printOutput()
{
  for(int i=0; i<m_numRows; i++)
  {
    for(int j=0; j<m_numCols; j++)
    {
      std::cout << m_maze[i][j];
    }
    std::cout << '\n';
  }
}

bool Blob::isWall(int row, int col)
{
  if(m_maze[row][col] == '#')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Blob::isStreet(int row, int col)
{
  if(m_maze[row][col] == 'S')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Blob::isOff(int row, int col)
{
  if(row > m_numRows-1||col > m_numCols-1||row < 0||col < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Blob::isSewer(int row, int col)
{
  if(m_maze[row][col] == '@')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Blob::isVisited(int row, int col)
{
  if(m_visited[row][col] == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

Blob::~Blob()
{
  for(int i=0; i<m_numRows; i++)
  {
    delete[] m_maze[i];
  }
  delete[] m_maze;
  for(int i=0; i<m_numRows; i++)
  {
    delete[] m_visited[i];
  }
  delete[] m_visited;
}
