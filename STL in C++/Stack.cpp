#include <iostream>
#include <stack>
using namespace std;

void Print(stack<int>stk)
{
	while (!stk.empty())
	{
		cout << stk.top()<<endl;
		stk.pop();
	}
}

int main()
{
	std::stack<int> stk;

	stk.push(2);
	stk.push(3);
	stk.push(4);

	Print(stk);

	return 0;
}