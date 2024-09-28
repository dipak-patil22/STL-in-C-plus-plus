#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

//int main()
//{
//	std:multiset<int> mulset1 = { 5,2,4,3,2,5 };
//	std:multiset<int, std::less<>> mulset2 = { 5,2,4,3,2,5 };
//	std:multiset<int, std::greater<>> mulset3 = { 5,2,4,3,2,5 };
//
//	for (const auto& e : mulset1)
//		cout << e << endl;
//}


//for user defined data type

class Person 
{
public:
	int age;
	string name;
	
	bool operator < (const Person& rhs) const { return age < rhs.age; }
	bool operator > (const Person& rhs) const { return age > rhs.age; }
};

int main()
{
	multiset <Person, std::less<>> mulset2 = { {25, "Rupesh"} , {20, "Mitesh"} };

	for (const auto& e : mulset2)
	{
		cout << e.age <<" "<<e.name << endl;
	}
}