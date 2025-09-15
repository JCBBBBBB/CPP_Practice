#include <iostream>
using namespace std;

//25.09.02 �н�
//static ����Լ��� ����

class Something
{
public:
	class _init
	{
	public:
		_init() // ������
		{
			s_value = 9876; // �����ڿ��� s_value �ʱ�ȭ
		}
	};


private:
	static int s_value; // static �������
	int m_value; // �������

	static _init s_initializer;

public:
	Something()
		: m_value(123) //static ��� ���� �����ڿ��� �ʱ�ȭ �Ұ�
	{}

	static int getValue()
	{
		return s_value; //static �Լ������� this ������ �� ����
	}

	int temp()
	{
		return this->s_value; //�Ϲ� �Լ������� ����
	}

};

Something::_init Something::s_initializer;
int Something::s_value = 1024;

int main()
{
	

	Something s1, s2;
	cout << s1.getValue() << endl;
	
	int (Something::*fptr1)() = &Something::temp; // ����Լ��� �ּҴ� Ŭ������ ����Ǿ� �ִ�

	cout << (s2.*fptr1)() << endl;

	int(*fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	cout << 1;
}