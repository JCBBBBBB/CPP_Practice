#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "������" << endl;
	}

	~A()
	{
		cout << "�Ҹ���" << endl;
	}

	void Print()
	{
		cout << "Hello" << endl;
	}

private:
};


int main()
{
	A a;
	a.Print();

	A().Print();

	
}