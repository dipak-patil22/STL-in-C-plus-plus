#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list <int> list1 = { 5,2,4,5,6,2 };
	forward_list <int> list2 = { 7,6,1,9 };

	list1.insert_after(list1.begin(), 8);

	for (auto& elm : list1)
		cout << elm << endl;

	list1.reverse();

	list1.sort();
	list2.sort();
	list1.merge(list2);

	list1.splice_after(list1.begin(), list2);

	list1.unique();

	list1.remove(2);
	list1.remove(2);

	//list1.remove_if([](int n)) { return n > 4; });

	list1.resize(2);



}