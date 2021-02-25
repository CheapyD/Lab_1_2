#include "Stack.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stack t;
	t.Init();
	t.Read();
	t.Display();

	cout << "Кількість елементів: " << t.Count() << endl;
}