#include <Windows.h>
#include <iostream>

#include "Interface.h"

using namespace std;

cInterface::cInterface()
{
	//Nothing here, go away!
}

cInterface::~cInterface()
{
}

int cInterface::printGUI()
{


	cout << "-----------------------------------------" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "    ###     ##        ########  ##     ##  " << endl;
	cout << "   ## ##    ##        ##         ##   ##   " << endl;
	cout << "  ##   ##   ##        ##          ## ##    " << endl;
	cout << " ##     ##  ##        ######       ###     " << endl;
	cout << " #########  ##        ##          ## ##    " << endl;
	cout << " ##     ##  ##        ##         ##   ##   " << endl;
	cout << " ##     ##  ########  ########  ##     ## ...With chocolate toppings" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "-----------------------------------------" << endl;

	return 1;
}