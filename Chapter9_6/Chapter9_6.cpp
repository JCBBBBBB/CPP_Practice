#include <iostream>
#include <cassert>
using namespace std;

class ArrayInt
{
private:
	int arr[10];

public:
	int& operator[] (int index) // ��ȯ���� ������ ���� : set ����, get ����
	{
		assert(index >= 0);
		assert(index < 10);

		return arr[index];
	}

	//const int& operator[] (int index) const // ��ȯ���� ������ ���� : set ����, get ����
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