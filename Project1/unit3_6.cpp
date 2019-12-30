#include<iostream>

using namespace std;

int main()
{
	/********** C++语言中没有多维数组，这是数组的数组	*********/
	int a[3][4];
	int a3[3][4][5] = { 0 };	// 全初始化为0

	int a34[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int a34_[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };	// 与上等价

	// 多维数组下标引用
	// int row[] = { 0,1,2,3,4,5 };
	int arr[2][2][2] = { 0 };

	int (&row)[4] = a34[1];	// 把a34的第二行绑定到row 引用
	for (auto i : row)
	{
		cout << i<<" ";
	}

	constexpr size_t rowCnt = 3, colCnt = 4;
	for (int row = 0; row != rowCnt; ++row)
	{
		for (int col = 0; col != colCnt; ++col)
		{
			a[row][col] = row * colCnt + col;
			cout << a[row][col];
		}
	}

	cout << endl;
	// c++ 11
	int a11[3][4];
	int cnt = 0;
	for (auto& row : a11)
	{
		for (auto& col : row)
		{
			col = cnt;
			++cnt;
			
		}
		
	
	}

	for (auto &i : a11)
	{
		for (auto j : i)
		{
			cout << j << " ";
		}
	}
	int(*p)[4] = a11;
	cout <<a11<< *p;
	for (auto& i : *p)
	{
		cout << i << " ";
	}

	cout << endl;
	
	p = &a11[2];
	for (auto& i : *p)
	{
		cout << i << " ";
	}

	cout << endl;
	//--------------------------------------------------------------
	for (auto p = a11; p != a11 + 3; ++p)
	{
		for (auto q = *p; q != *p + 4; ++q)
		{
			cout << *q << " ";
		}
	}

	cout << endl;

	for (auto p = begin(a11); p != end(a11); ++p)
	{
		for (auto q = begin(*p); q != end(*p); ++q)
		{
			cout << *q << " ";
		}
	}

}
