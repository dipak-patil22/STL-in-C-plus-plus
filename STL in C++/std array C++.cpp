#include <iostream>
#include <array>

using namespace std;

int main()
{
	//Declare
	std::array<int, 5> myarray;

	//Initialization
	std::array<int, 5> myarray = { 1,2,3,4,5 };	//Inilualizer list
	std::array<int, 5> myarray2 { 1,2,3,4,5 };	//Uniform Initialization

	//Assign using intializer list
	std::array<int, 5> myarray;
	myarray = { 1,2,3,4,5 };

}