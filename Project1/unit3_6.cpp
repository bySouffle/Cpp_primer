//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[3][4] = {
//		{0,1,2,3},
//		{4,5,6,7},
//		{8,9,10,11}
//	};
//
//	int arr[10][20][30] = { 0 };
//
//
//	// ��Ϊ������±�����
//	int ia[3][4] = { {1}, {2}, {3} };
//	ia[2][3] = arr[0][0][0];
//	int(&row)[4] = ia[1];	// ����
//	
//	// ��ά����forѭ����ֵ
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int da[rowCnt][colCnt];
//	for(size_t i =0;i!=rowCnt;++i)
//		for (rsize_t j = 0; j != colCnt; ++j)
//		{
//			da[i][j] = i * j + j;
//		}
//	for (auto& row : da)
//		for (auto& col : row)
//			cout << col << endl;
//	 
//	// ָ��Ͷ�ά����
//	int x = 0;
//	int ia1[3][4];
//	for(auto &i:ia1)
//		for (auto& j : i)
//		{
//			j = x;
//			++x;
//			cout << j << " ";
//		}
//
//
//	int(*p)[4] = ia1;	// p��ָ���ĸ�������ָ�룿
//	p = &ia1[2];
//	cout << p<<endl;
//
//	for (auto p = ia1; p != ia1 + 3; ++p)
//	{
//		for (auto q = *p; q != *p + 4; ++q)
//			cout << *q << " ";
//		cout << endl;
//	}
//
//
//	for (auto& i : ia1)
//		for (auto& j : i)
//			cout << j<<" ";
//
//}