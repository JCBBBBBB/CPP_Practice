#include <iostream>
using namespace std;

//25.09.02 학습
//static 멤버함수에 대해

class Something
{
public:
	class _init
	{
	public:
		_init() // 생성자
		{
			s_value = 9876; // 생성자에서 s_value 초기화
		}
	};


private:
	static int s_value; // static 멤버변수
	int m_value; // 멤버변수

	static _init s_initializer;

public:
	Something()
		: m_value(123) //static 멤버 변수 생성자에서 초기화 불가
	{}

	static int getValue()
	{
		return s_value; //static 함수에서는 this 포인터 못 쓴다
	}

	int temp()
	{
		return this->s_value; //일반 함수에서는 가능
	}

};

Something::_init Something::s_initializer;
int Something::s_value = 1024;

int main()
{
	

	Something s1, s2;
	cout << s1.getValue() << endl;
	
	int (Something::*fptr1)() = &Something::temp; // 멤버함수의 주소는 클래스에 저장되어 있다

	cout << (s2.*fptr1)() << endl;

	int(*fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	cout << 1;
}