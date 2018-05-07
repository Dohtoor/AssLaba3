// AssLaba3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	char a = 29, b = 18, c = 31, d = -14;

	__asm {
		mov al, c
		and al, a
		mov a, al
		not b
		mov al, b
		or al, a
		or al, d
		mov b, al
	}

	std::cout << std::hex << static_cast<unsigned int>(static_cast<unsigned char>(b)) << "h" << std::endl;
	system("pause");
	return 0;
}
