/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 5/1/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <array>
#include <string>
#include <bits/stdc++.h>

int ithFib(int index, int f0, int f1)
{
  int temp = 0;
  if(index == 0)
  {
    return f0;
  }
  else
  {
    temp = f0 + f1;
    f0 = f1;
    f1 = temp;
    return(ithFib(index-1, f0, f1));
  }
}

bool verifyFib(int num, int i)
{
  if(ithFib(i,0,1) == num)
  {
    return(true);
  }
  else if(ithFib(i,0,1) < num)
  {
    return verifyFib(num,i+1);
  }
  else
  {
    return(false);
  }
}

std::string convertToString(char* arr, int size)
{
  int i;
  std::string str = "";
  for (i=0; i<size; i++)
  {
    str = str + arr[i];
  }
  return str;
}

int main(int argc, char* argv[])
{
  std::string flag = convertToString(argv[1], strlen(argv[1]));
  int n = atoi(argv[2]);
  if(flag == "-i")
  {
    std::cout << ithFib(n,0,1) << '\n';
  }
  else if(flag == "-v")
  {
    if(verifyFib(n,0) == true)
    {
      std::cout << n << " is in the sequence\n";
    }
    else
    {
      std::cout << n << " is not in the sequence\n";
    }
  }
  return(0);
}
