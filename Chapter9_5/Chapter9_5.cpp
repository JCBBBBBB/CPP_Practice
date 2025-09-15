#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) : m_cents(cents)
	{ }

	// prefix
	Cents& operator++()
	{
		++m_cents;
		return *this;
		//return Cents(++m_cents);
	}

	//postfix
	Cents operator++(int)
	{
		Cents temp(m_cents);
		++(*this);

		return temp;
	}
	

	friend ostream& operator<<(ostream& out, const Cents& c1)
	{
		out << c1.m_cents;
		return out;
	}
};


int main()
{
	Cents c1(5);
	cout << c1++;
	cout << c1;
}