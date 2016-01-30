#include <Windows.h>
#include <fstream>

#include "Log.h"

cLog::cLog()
{
}

cLog::~cLog()
{
}

int cLog::logText(const char* output)
{
	if (logFile == 0)
	{
		fopen_s(&logFile, "Alex.log", "w");
	}
	else {}

	if (fputs(output, logFile) > 0)
	{
		MessageBox(0, "Error while writing logs", 0, 0);
	}

	fputs("\n", logFile);

	return 1;
}