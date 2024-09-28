#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	multimap<char, int>mulmap;
	mulmap.insert(make_pair('a', 1));
	mulmap.insert(make_pair('a', 2));
	mulmap.insert(make_pair('a', 3));
	mulmap.insert(make_pair('b', 4));
	mulmap.insert(pair<char, int>('b', 1));

	//Iterate over multimap
	for (auto e : mulmap)
		cout << e.first << " " << e.second << endl;

	cout << endl;

	//Get all the pairs of given key
	auto range = mulmap.equal_range('a');

	for (auto it = range.first; it != range.second; it++)
	{
		cout << it->first << " " << it->second << endl;

	}
	return 0;
}