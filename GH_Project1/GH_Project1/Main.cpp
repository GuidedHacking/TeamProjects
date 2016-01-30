/*Made by Alex 30/1/2016

30/1/2016 Update|Alex:
Added a variable containing a string, which is printed as output.

30/1/2016 Update|Alex:
Changed the printing method to a loop, Looks cooler.
*/

#include <Windows.h>
#include <iostream>

void noob()
{
	std::cout << "rake is a fgt" << std::endl;
}

void func()
{
	std::cout << "huehuehuehue" << std::endl;
}

int main()
{
	const char* Hello = "Hello World !";

	for (int chr = 0; chr < 14; chr++)
	{
		// Comment by till0sch
		SleepEx(100, true);

		std::cout << Hello[chr];
	}
	std::cout << std::endl;

	std::cin.get();

	return 1;
}