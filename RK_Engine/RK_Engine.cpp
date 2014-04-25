// RKEngine.cpp : Defines the entry point for the console application.
//


#include "PoolThread.h"

#include <iostream>

int main()
{

	PoolThread* poolThread = new PoolThread(2);

	char outing;
	std::cin >> outing;

	return 0;
}

