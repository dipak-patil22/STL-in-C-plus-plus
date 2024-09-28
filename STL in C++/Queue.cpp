#include <iostream>
#include <queue>
using namespace std;

void Print(std::queue <int> que)
{
	while (!que.empty())
	{
		cout << que.front()<<endl;
		que.pop();
	}
}

int main()
{
	std::queue <int> que;
	que.push(2);
	que.push(3);
	que.push(4);

	Print(que);

	return 0;
}