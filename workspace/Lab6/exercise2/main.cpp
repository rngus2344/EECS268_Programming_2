/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 5/1/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <string>
#include <array>
#include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r)
{
  if(l == r)
  {
    cout << str << '\n';
  }
  else
  {
    for(int i=l; i<=r; ++i)
    {
      swap(str[l], str[i]);
      permute(str, l+1, r);
      swap(str[l], str[i]);
    }
  }
}

void combination(string str, string &substr, int index)
{
  int m = str.length();
  for(int i=index; i<m; i++)
  {
    substr += str[i];
    permute(substr, 0, substr.length()-1);
    combination(str, substr, i+1);
    substr.erase(substr.length()-1, 1);
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
  string substr = "";
  int n = strlen(argv[1]);
  combination(convertToString(argv[1], n), substr, 0);
  return 0;
}
