#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	int ia[3][4];
	for (int i = 0; i != 3; ++i)
	{
		for (int j = 0; j != 4; ++j)
		{
			ia[i][j] = num;
			++num;
		}
	}

	for (auto &i : ia)
	{
		for(auto j:i)
		cout << j << " ";
	}
	cout << endl;
	
	// ��ʹ���ƶ�����
	for (int(&i)[4] : ia)	// һ���ĸ�Ԫ�����õ�i
	{
		for (int j : i)
			cout << j << " ";

	}
	cout << endl;
	//---------------------------------------------
	for (int i = 0; i != 3; ++i)
	{
		for (int j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
	}
	cout << endl;
	//---------------------------------------------
	for (auto p = ia; p != ia + 3; ++p)
	{
		for (auto q = *p; q != *p + 4; ++q)
		{
			cout << *q << " ";
		}
	}
	cout << endl;

	for (int(* p)[4] = ia; p != ia + 3; ++p)	//  *p ���ĸ�����������
	{
		for (int* q = *p; q != *p + 4; ++q)
			cout << *q << " ";
	}
	cout << endl;
	//----------------------------------------------
	for (auto p = begin(ia); p != end(ia); ++p)
	{
		for (auto q = begin(*p); q != end(*p); ++q)
		{
			cout << *q << " ";
		}
	}
	cout << endl;
	// ���ͱ���
	using int_array = int[4];
	//typedef int int_array[4];	// �ȼ���

	for (int_array* p=ia; p != ia + 3; ++p)
	{
		for (int* q = *p; q != *p + 4; ++q)
			cout << *q << " ";
	}



}