#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) : m_cents(cents)
	{ }

	int GetCents() const
	{
		return m_cents;
	}

	operator int()
	{
		return this->m_cents;
	}
};

class Dollars
{
private:
	int m_dollars = 0;

public:
	Dollars(int dollar) : m_dollars(dollar)
	{ }

	operator Cents()
	{
		return Cents(m_dollars * 20);
	}
};

int main()
{
	Dollars d1(10);

	Cents c1 = (Cents)d1;

	cout << (int)c1;
}