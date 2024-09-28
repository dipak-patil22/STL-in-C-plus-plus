#include <iostream>
#include <vector>

using namespace std;

void print(std::pair<int, int>& obj)
{
	cout << obj.first << "  " << obj.second << endl;
}

int main()
{
	std::pair <int, int> obj1(10, 10);
	print(obj1);

	pair <int, int> obj2 = make_pair(20, 30);
	print(obj2);

	vector < pair<string, int>> list1;
	list1.push_back(make_pair("Hitesh", 30));
	list1.push_back(make_pair("Rupesh", 28));
	list1.push_back(pair<string, int>("Bhupendra", 25));

	for (auto& elm : list1)
		cout << elm.first << " " << elm.second<<endl;

	return 0;
}