#include <iostream>
using namespace std;

class Fraction
{
private:
	int mother;
	int son;


public:
	Fraction(int _mother, int _son) : mother(_mother), son(_son)
	{ }

	Fraction (const Fraction& copy)
	{
		cout << "복사 생성자 실행" << endl;

		mother = copy.mother;
		son = copy.son;
	}

	friend ostream& operator << (ostream& out, const Fraction& fraction)
	{
		out << fraction.son << " / " << fraction.mother;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);

	cout << &temp << endl;

	return temp;
}

int main()
{
	Fraction f1 = doSomething();

	cout << &f1;
}