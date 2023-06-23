#include "pch.h"
#include <iostream>
#include "framework.h"

using namespace std;

void fnStaticLib(const bool& result)
{
	if (result)
	{
		cout << "Да!" << std::endl;
	}
	else
	{
		cout << "Нет!" << std::endl;
	}
}