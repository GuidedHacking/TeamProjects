/*Made by Alex 30/1/2016

30/1/2016 Update:
Added a variable containing a string, which is printed as output.*/
#include <Windows.h>
#include <iostream>

int main()
{
	const char* Hello = "Hello World!";

	std::cout << Hello << "\n";

	std::cin.get();

	return 1;
}