#include<iostream>
#include<set>
using namespace std;

class A
{
public:
	int x;
	A(int x = 0) :x{ x }
	{
		cout << "Construct" << endl;
	}

	A(const A& rhs)
	{
		x = rhs.x;
		cout << "Copy" << endl;
	}
};

bool operator < (const A& lhs, const A& rhs)
{
	return lhs.x < rhs.x;
}

int main()
{
	set<A> set;
	//A a(10);
	//set.insert(10);		//or

	set.insert(A(10));

	cout << endl;


	set.emplace(2);

	return 0;
}