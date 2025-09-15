#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) : m_cents(cents)
	{
	}

	friend ostream& operator <<(ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

	Cents operator -() const
	{
		return Cents(-m_cents);
	}

	bool operator !()
	{
		return m_cents == 0 ? true : false;
	}
};


int main()
{
	Cents c1(6);
	Cents c2(0);

	//cout << -c1;

	cout << !c1 << !c2;
}