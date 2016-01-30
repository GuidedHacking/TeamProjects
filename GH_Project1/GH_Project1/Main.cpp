/*Made by Alex 30/1/2016

30/1/2016 Update|Alex:
Added a variable containing a string, which is printed as output.

30/1/2016 Update|Alex:
Changed the printing method to a loop, Looks cooler.

30/1/2016 Update|Alex&Till
Added useless functions for merge testing.

30/1/2016 Update|Alex
Added a more polite output.
*/

#include <Windows.h>
#include <iostream>

#include "Interface.h"

cInterface Interface;

int main()
{
	Interface.printGUI();

	std::cin.get();

	return 1;
}