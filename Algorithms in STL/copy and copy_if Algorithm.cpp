#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

void print(vector <int>& vec)
{
	for (auto& elm : vec)
		cout << elm << " ";

	cout << endl << endl;
	return;
}

int main()
{
	vector <int> from_vector(10);
	iota(from_vector.begin(), from_vector.end(), 0);

	vector<int> to_vector1(from_vector.size());
	copy(from_vector.begin(), from_vector.end(), to_vector1.begin());
	print(to_vector1);

	//or Alternatively
	vector <int> to_vector2;
	copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2));
	print(to_vector2);

	//either way is equivalent to
	vector <int> to_vector = from_vector;

	//using copy we can partially copy elements using copy() function
	vector <int> to_vector4;
	copy(from_vector.begin()+1, from_vector.end()-2, back_inserter(to_vector4));
	print(to_vector4);


	cout << "odd number in vector one: ";
	vector <int> to_vector3(5);

	copy_if(from_vector.begin(), from_vector.end(), to_vector3.begin(), [](int x) {return (x % 2) == 1;});
	print(to_vector3);

	return 0;

}