#include <iostream>
using namespace std;

class Accumulator
{
private:
	int m_int = 0;

public:
	const int operator() (int plus)
	{
		m_int += plus;
		return m_int;
	}

};


int main()
{
	Accumulator AC;
	
	cout << AC(10);
	cout << AC(10);
}