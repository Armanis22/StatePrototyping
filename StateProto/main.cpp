// StateProto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include "Brandon.h"

int main()
{

	Brandon brandon;

	for (int i = 0; i < 20; ++i)
	{
		Sleep(800);
	}
	while (!_kbhit()){}

	return 0;
}

