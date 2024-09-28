#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

int main()
{
	//1. Sort with integral data type
	std::vector <int> vec{ 5,4,6,7,3,2,8,9,1 };
	std::sort(vec.begin(), vec.end());				// As data type is integral hence no need write comparator

	for (auto& elm : vec)
	{
		cout << elm << " ";
	}
	cout << endl << endl << endl;

	//2.Sort user defined data type

	class Point
	{
	public:
		int x;
		int y;

		Point(int x = 0, int y = 0) : x{ x }, y{ y }
		{

		}

		bool operator < (const Point& P1)			//Comparator is written as it is user defined data type
		{
			return (x + y) < (P1.x + P1.y);
		}
	};

	vector <Point> vec1{ {1,2}, {3,1},{0,1} };
	sort(vec1.begin(), vec1.end());

	for (auto& elm : vec1)
	{
		cout << elm.x << " " << elm.y << endl;
	}
	cout << endl << endl << endl;


	//3. Sort using a function object

	struct
	{
		bool operator () (int a, int b) const
		{
			return a < b;
		}
	}CustomLess;


	std::vector <int> vec3{ 5,4,6,7,3,2,8,9,1 };
	std::sort(vec3.begin(), vec3.end(), CustomLess);	//Object of operator is passed , CustomLess

	for (auto& elm : vec3)
	{
		cout << elm << " ";
	}
	cout << endl << endl << endl;


	//4. Sort using Lambda function

	std::vector <int> vec4{ 5,4,6,7,3,2,8,9,1 };
	std::sort(vec4.begin(), vec4.end(), [](int a, int b) {return a < b; });	// operator is directly written 
	// using Lambda function :  [](int a, int b) {return a < b;}
	for (auto& elm : vec3)
	{
		cout << elm << " ";
	}
	cout << endl << endl << endl;


}