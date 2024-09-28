#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <int, char> umap = { {1, 'a'}, {2, 'b'}};

	//access
	cout << umap[1] << endl;
	cout << umap[2] << endl;

	//update
	umap[1] = 'c';

	//iterate
	auto search = umap.find(2);
	if (search != umap.end())
		cout << " Found " << endl;
	else
		cout << " Not Found " << endl;

	for (auto& elm : umap)
		cout << elm.first << " " << elm.second << endl;

	cout << endl;
	return 0;
}