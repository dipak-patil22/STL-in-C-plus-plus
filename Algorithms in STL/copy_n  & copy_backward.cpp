#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
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
	iota(from_vector.begin(), from_vector.end(), 0); // O/P: 0 1 2 3 4 5 6 7 8 9

	//copy
	vector <int> to_vector1;
	copy_n(from_vector.begin(), 4, back_inserter(to_vector1));
	print(to_vector1);

	//copy_backward
	vector <int> to_vector2(15);
	copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end());
	print(to_vector2);

	return 0;
}