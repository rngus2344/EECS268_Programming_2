/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 5/1/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>
#include <bits/stdc++.h>

char findClosing(char c)
{
  if(c == '(')
  {
    return(')');
  }
  return -1;
}

bool isBalanced(char seq[], int n)
{
  if(n == 0)
  {
    return(true);
  }
  if(n == 1)
  {
    return(false);
  }
  if(seq[0] == ')')
  {
    return(false);
  }

  char closing = findClosing(seq[0]);

  int i, count = 0;
  for (i=1; i<n; i++)
  {
    if(seq[i] == seq[0])
    {
      count++;
    }
    if(seq[i] == closing)
    {
      if(count == 0)
      {
        break;
      }
      count--;
    }
  }

  if(i == n)
  {
    return(false);
  }

  if(i == 1)
  {
    return(isBalanced(seq+2, n-2));
  }

  return(isBalanced(seq+1, i-1) && isBalanced(seq+i+1, n-i-1));
}

int main(int argc, char* argv[])
{
  int n = strlen(argv[1]);
  if(isBalanced(argv[1], n))
  {
    std::cout << "The sequence " << argv[1] << " is Balanced\n";
  }
  else
  {
    std::cout << "The sequence " << argv[1] << " is Not Balanced\n";
  }
  return(0);
}
