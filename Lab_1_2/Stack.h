#pragma once

typedef int Info;

class Stack
{
private:
	struct Elem
	{
		Elem* link;
		Info info;
	};
	Elem* top;

public:
	
	Elem* GetTop() const { return top; }

	void Init() { top = nullptr; }
	void Display();
	void Read();

	void Push(Info value);
	Info Pop();
	int Count() const;

	bool Empty() const { return top == nullptr; }
};
