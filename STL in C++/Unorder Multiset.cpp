#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_multiset <int> umst = { 4,1,2,3,4,2,3,9,8,10};

	auto search = umst.find(2);

	if (search != umst.end())
		cout << " Found " << endl;
	else
		cout << " Not Found " << endl;

	for (auto& elm : umst)
		cout << elm << endl;

	cout << endl;
	return 0;
}
