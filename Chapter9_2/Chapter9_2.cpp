#include <iostream>
using namespace std;

class Point
{
private:
	float m_x, m_y, m_z;
	friend Point1;
public:


	Point(float x = 0, float y = 0, float z = 0) : m_x(x), m_y(y), m_z(z)
	{ }

	float GetPointX() const
	{
		return m_x;
	}
	float GetPointY() const
	{
		return m_y;
	}
	float GetPointZ() const
	{
		return m_z;
	}

	// ��� �Լ� �ƴ϶� �ܺ� �Լ��̴�
	// friend �Լ��� Ŭ������ private, protected�� ������ �� �ִ�
	friend ostream& operator<<(ostream& out, const Point& point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";

		return out;
	}

	friend istream& operator>>(istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;

		return in;
	}
};

class Point1
{
private:

public:

	float GetX(Point& point)
	{
		point.
	}
};

int main()
{
	Point p1, p2;
	cin >> p1 >> p2;

	cout << p1 << p2;
}