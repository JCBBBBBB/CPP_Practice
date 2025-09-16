#include <iostream>
#include <cassert>
using namespace std;

class ArrayInt
{
private:
	int arr[10];

public:
	int& operator[] (int index) // 반환형이 참조인 이유 : set 가능, get 가능
	{
		assert(index >= 0);
		assert(index < 10);

		return arr[index];
	}

	//const int& operator[] (int index) const // 반환형이 참조인 이유 : set 가능, get 가능
	//{
	//	assert(index >= 0);
	//	assert(index < 10);

	//	return arr[index];
	//}
};

int main()
{
	ArrayInt Arr;

	Arr[1] = 2;
	cout << Arr[1];
}