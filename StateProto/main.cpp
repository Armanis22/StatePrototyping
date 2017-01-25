// StateProto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include "Brandon.h"

int main()
{

	Brandon brandon;

	for (int i = 0; i < 10; ++i)
	{
		brandon.Update();
		Sleep(1000);
	}

	printf("Press any key to exit...\n");
	while (!_kbhit()){}

	return 0;
}

