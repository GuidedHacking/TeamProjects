/*Made by Alex 30/1/2016

30/1/2016 Update|Alex:
Added a variable containing a string, which is printed as output.

30/1/2016 Update|Alex:
Changed the printing method to a loop, Looks cooler.


30/1/2016 Update|Alex&Till
Added useless fucntions for merge testing.
*/

#include <Windows.h>
#include <iostream>

void alex()
{
	std::cout << "alex is a SOCIOPATH KILLER" << std::endl; //Lel -Alex
}

void rake()
{
	std::cout << "rake is coolz kid" << std::endl;
}

void solaire()
{
	std::cout << "solaire is a betrayer" << std::endl;
}

void Till0sch()
{
	std::cout << "Till is a trigger-happy" << std::endl;
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