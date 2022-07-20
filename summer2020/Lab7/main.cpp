/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 7/22/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>
#include "Executive.h"

int main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		std::cout << "Incorrect number of parameters!" << std::endl;
		return 0;
	}
	else
	{
		Executive executive(argv[1]);
		executive.run();
	}
}
