#pragma once

class cLog
{
public:
	cLog();
	~cLog();

	int logText(const char*);

private:
	FILE* logFile;
};

extern cLog Log;