#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vec{ 2,5,3,6,4,7 };
	vector<int>::iterator it = find(vec.begin(), vec.end(), 5);

	if (it == vec.end())
		cout << " Not Found "<<endl;
	else
		cout << " Found "<<endl;

	//Another way of defining iterator

	auto itr = find(vec.begin(), vec.end(), 9);
	if (itr == vec.end())
		cout << " Not Found " << endl;
	else
		cout << " Found " << endl;

}

