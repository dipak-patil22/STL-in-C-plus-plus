
//Used to find how many elements are sorted in given range [first, last]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> vec {4, 3, 2, 6, 7, 8, 1};

	auto it = is_sorted_until(vec.begin(), vec.end());
	auto diff = distance(vec.begin(), it);
	cout << diff << endl;

	auto it1 = is_sorted_until(vec.begin(), vec.end(), greater <int>());
	auto diff1 = distance(vec.begin(), it1);
	cout << diff1 << endl;


	return 0;
}