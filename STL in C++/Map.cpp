#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	map<string, int>map1;

	//creation of pair
	map1["Chotu"] = 90909090;
	map1["Amit"] = 73648923;
	map1.insert(make_pair("John", 63774929));

	//loop through map
	for (auto& e : map1)
		cout << e.first << "  " << e.second<<endl;


	cout << endl << endl;
	//stroing multiple values for the same key
	map<string, vector<int>, std::less<>> map2;

	map2["Rakesh"].push_back(63784839);
	map2["Hitesh"].push_back(76363844);
	map2["Hitesh"].push_back(84748593);

	//loop
	for (auto& e1: map2)
	{
		cout << e1.first << endl;
		for (auto& e2 : e1.second)
			cout << e2<< " ";
		
		cout << endl;
	}




}