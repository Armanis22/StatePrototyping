// StateProto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include "Brandon.h"

int main()
{

	Brandon brandon;

	for (int i = 0; i < 3; ++i)
	{
		brandon.Update();
		Sleep(400);
	}
	while (!_kbhit()){}

	return 0;
}

