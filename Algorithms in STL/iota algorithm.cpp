#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
	list <int> lst(10);
	iota(lst.begin(), lst.end(), -5);

	for (auto elm : lst)
		cout << elm << endl;

	cout << endl;

	std::vector <std::list <int>::iterator> vec(lst.size());
	std::iota(vec.begin(), vec.end(), lst.begin());
	
	for (auto elm : vec)
		cout << *elm << endl;

	return 0;
}