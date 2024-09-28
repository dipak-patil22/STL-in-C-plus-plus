#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

int main()
{
	set<int> set1 = { 1,2,5,4,3,1,4,5,3 };
	
		for (const auto& e : set1)
		{
			cout << e << endl;
		}	
}