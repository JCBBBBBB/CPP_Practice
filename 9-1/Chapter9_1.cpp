#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int value)
	{
		m_cents = value;
	}

	int GetCents()
	{
		return m_cents;
	}

	Cents add(const Cents& value) const
	{
		return Cents(this->m_cents + value.m_cents);
	}

	Cents operator +(const Cents& value) const // Cents�� ������ �� ���� : value�� ���簡 �ƴ϶� ������
	{
		return Cents(this->m_cents + value.m_cents);
	}
};


int main()
{
	Cents c1(5);
	Cents c2(6);

	Cents c3 = c1 + string_view("aaa");
	cout << c3.GetCents();
}