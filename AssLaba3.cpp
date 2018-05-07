// AssLaba3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	char a = 29, b = 18, c = 31, d = -14;

	__asm {
		not b
		mov al, b
		and al, c
		or al, a
		and al, d
		mov b, al
	}

	std::cout << std::hex << static_cast<int>(b) << "h" << std::endl;
	system("pause");
	return 0;
}

