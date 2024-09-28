#include <iostream>
#include <deque>

using namespace std;

void print(deque<int>& dqu)
{
	for (int elm : dqu)
		cout << elm << " ";

	cout << endl;
}

int main()
{
	std::deque<int> dqu = { 2,3,4 };
	dqu.push_back(5);
	dqu.push_front(1);
	print(dqu);

	std::deque <int> dqu2 = { 2,3,4 };
	dqu2.pop_back();
	dqu2.pop_front();
	print(dqu2);
}