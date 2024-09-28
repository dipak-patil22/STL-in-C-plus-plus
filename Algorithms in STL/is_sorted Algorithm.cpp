#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <int> vec{ 5,4,6,7,3,2,8,9,1 };

	sort(vec.begin(), vec.end());

	for (auto& elm : vec)
		cout << elm << " ";

	cout << endl;

	cout<<is_sorted(vec.begin(), vec.end());

}