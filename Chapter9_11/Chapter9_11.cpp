#include <iostream>
using namespace std;


class MyString
{
public:
	MyString(const char* ch = "") // ex) hello
	{
		m_size = strlen(ch) + 1;
		data = new char[m_size];
		for (int i = 0; i < m_size; i++)
		{
			data[i] = ch[i];
		}
		data[m_size - 1] = '\0';
		

	}

	//MyString(const MyString& copy) //  ���� ����
	//{
	//	this->data = copy.data;
	//	this->m_size = copy.m_size;
	//}

	MyString(const MyString& copy) // ��������, ���������
	{
		this->m_size = copy.m_size;

		if (copy.data != nullptr)
		{
			this->data = new char[m_size];

			for (int i = 0; i < m_size; i++)
			{
				this->data[i] = copy.data[i];
			}
		}
		else
		{
			this->data = nullptr;
		}
	}

	MyString& operator =(const MyString& copy) // ��������, ���Կ����� �����ε�
	{
	
		if (this->data = copy.data) return *this;

		delete[] data;

		this->m_size = copy.m_size;
		if (copy.data != nullptr)
		{
			this->data = new char[m_size];

			for (int i = 0; i < m_size; i++)
			{
				this->data[i] = copy.data[i];
			}
		}
		else
		{
			this->data = nullptr;
		}
		return *this;
	}

	~MyString()
	{
		delete[] data;
	}
public:
	char* data;
	int m_size = 0;
};


int main()
{
	MyString my("hello");

	MyString str1(my);

	MyString str2;
	str2 = my;

	my.data[0] = 'c';

	str1.data[0] = 'd';

	str2.data[0] = 'e';
}