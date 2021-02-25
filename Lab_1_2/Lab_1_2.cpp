#include "Stack.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Stack makeStack()
{
	Stack s;
	s.Init();
	return s;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stack t;
	t.Init();
	t.Read();
	t.Display();

	cout << "ʳ������ �������� �� ���������: " << t.Count() << endl;

	t.Pop();
	t.Display();

	cout << "ʳ������ �������� ���� ���������: " << t.Count() << endl;

	makeStack();
}