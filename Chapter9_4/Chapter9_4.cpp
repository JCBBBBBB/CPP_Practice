#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// == <
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) : m_cents(cents)
	{ }

	friend ostream& operator <<(ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

	friend bool operator ==(const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}
};



int main()
{
	Cents c1(6), c2(6);

	cout << (c1 == c2);

	vector<Cents> vec;

	for (auto i = 0; i < 20; i++)
	{
		vec.push_back(i);
	}

	random_shuffle(vec.begin(), vec.end());
	sort(vec.begin(), vec.end());



}