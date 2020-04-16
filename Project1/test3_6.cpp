#include<iostream>
using namespace std;

int main()
{
	int ai[3][4] = { 0,1,2,3,4,5,6,7,8,9,10 };

	for (auto& row : ai)
		for (auto& col : row)
			cout << col<<" ";
	cout << endl;

	for (int i = 0; i != 3; ++i)
		for (int j = 0; j != 4; ++j)
			cout << ai[i][j] << " ";
	cout << endl;

	for (auto p = begin(ai); p != end(ai); ++p)
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";

}