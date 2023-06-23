#include <iostream>
#include "../StaticLib/Header.h"
#include <wtypes.h>
#include <string>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HINSTANCE dynamicLib;
	dynamicLib = LoadLibrary(L"DynamicLib.dll");

	typedef bool (*CharSearchFunc)(const char*, const char*);
	CharSearchFunc searchFunc = reinterpret_cast<CharSearchFunc>(GetProcAddress(dynamicLib, "SearchCharacters"));

	cout << "������� ������: ";
	string input;
	getline(cin, input);

	cout << "�������, ��� � ��� ������: ";
	string characters;
	getline(cin, characters);

	cout << "�������� �� ������ \"" << input << "\" ������� \"" << characters << "\" ?" << endl;

	bool result = searchFunc(input.c_str(), characters.c_str()); // ������������� ������������ ����������

	fnStaticLib(result); // ������������� ����������� ����������

	FreeLibrary(dynamicLib);

	return 0;
}