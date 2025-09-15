#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
using namespace std;

class B;

class A
{
private:
	int value = 1;
	friend void doSomething(A& a, B& b);
};



class B
{
private:
	int value = 2;
	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b)
{
	cout << a.value << " " << b.value << endl;
}
int main()
{
	/*A a;
	B b;
	doSomething(a,b);*/
	
}