#include <iostream>
using namespace std;

class Fraction
{
private:
	int mother;
	int son;

public:
	Fraction(char) = delete;

	Fraction(int _son = 0, int _mother = 1) : mother(_mother), son(_son)
	{
	}

	friend ostream& operator << (ostream& out, const Fraction& frac)
	{
		out << frac.mother << " " << frac.son << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac;
}

int main()
{
	Fraction f1(5);

	doSomething(5);
}