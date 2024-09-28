#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> vec { 5,7,4,2,8,6,1,9,0,3 };
	partial_sort(vec.begin(), vec.begin() + 4, vec.end());

	for (auto& elm : vec)
		cout << elm << " ";

	return 0;
}