#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//Declarations
	std::vector<int> vect1;
	std::vector<int>vec2(5, 20);
	std::vector<int> vec3 = { 1,2,3,4,5 };
	std::vector<int> vec4{ 1,2,3,4,5 };

	

	//Accessing the elements
	vec3[3] = 10;
	vec4.at(4) = 20;
}