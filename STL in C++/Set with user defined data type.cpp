#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class Person
{
	int age;
	string name;
	bool operator < (const Person& rhs) const { return age < rhs.age; }
};

int main()
{
	set<Person> set1 = { {30,"Rakesh"},{23, "Mitesh"}, {20, "Hitesh"}};

	for (const auto& e : set1)
	{
		cout << e << endl;
	}
	return 0;
}