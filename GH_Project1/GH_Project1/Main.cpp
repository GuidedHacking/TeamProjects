/*Made by Alex 30/1/2016

30/1/2016 Update|Alex:
Added a variable containing a string, which is printed as output.

30/1/2016 Update|Alex:
Changed the printing method to a loop, Looks cooler.

30/1/2016 Update|Alex&Till
Added useless functions for merge testing.

30/1/2016 Update|Alex
Added a more polite output.

30/1/2016 Update|Solaire
Added a test function.
*/

#include <Windows.h>
#include <iostream>

#include "Interface.h"
#include "Log.h"

enum class Operation {
	ADD,
	SUB,
	MUL,
	DIV,
	MOD
};

template <class T>
T mathematical(T x, T y, Operation o);

cInterface Interface;
cLog Log;

int main()
{
	Log.logText("int main() : Solaire is neb");

	Interface.printGUI();
	std::cout << mathematical<int>(12, 4, Operation::ADD) << std::endl;

	std::cin.get();

	return 1;
}

template <class T>
T mathematical(T x, T y, Operation o) 
{
	switch (o) 
	{
	case Operation::ADD: return x + y;
	case Operation::SUB: return x - y;
	case Operation::MUL: return x * y;
	case Operation::DIV: return x / y;
	case Operation::MOD: return x % y;
	}

	return 0;
}