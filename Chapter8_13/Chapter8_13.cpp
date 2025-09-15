#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "持失切" << endl;
	}

	~A()
	{
		cout << "社瑚切" << endl;
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