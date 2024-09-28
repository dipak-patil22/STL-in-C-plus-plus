#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	vector <int> vec{ 5,6,4,3,2,6,7,9,3 };

	nth_element(vec.begin(), vec.begin() + vec.size() / 2, vec.end());
	cout << " The median is: " << vec[vec.size() / 2]<<endl;

	nth_element(vec.begin(), vec.begin() + 1, vec.end(), greater<int> ());
	cout << " The second largest element is : " << vec[1] << endl;

	return 0;
}