#include "Stack.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Stack::Display()
{
	Stack::Elem* L = top;
	while (L != NULL)
	{
		cout << setw(4) << L->info;
		L = L->link;
	}
	cout << endl << endl;
}

void Stack::Read()
{
	Info k;
	char ch;
	do
	{
		cout << "Введіть значення: "; cin >> k;
		Push(k);
		cout << "Продовжити введення значень? (Y/N) "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}

void Stack::Push(Info value)
{
	Stack::Elem* tmp = new Stack::Elem();
	tmp->info = value;
	tmp->link = top;
	top = tmp;
}

Info Stack::Pop()
{
	Stack::Elem* tmp = top->link;
	Info value = top->info;
	delete top;
	top = tmp;
	return value;
}

int Stack::Count() const
{
	Stack::Elem* L = top;
	int k = 0;
	while (L != NULL)
	{
		k++;
		L = L->link;
	}
	return k;
}



