#include<iostream>
#include<vector>
using namespace std;

string s_out[5];
int i_out[5];

int main()
{
	unsigned cnt = 42;
	constexpr unsigned sz = 42;
	int arr[10];
	int* parr[sz];
	//	string bad[cnt];	//cnt�����ǳ���
	string strs[sz];

	// ------------------�ܽ᣺ �����ά�����õĻ�������const���� constexpr-------------------

	const unsigned sz_2 = 3;
	int ial[sz_2] = { 0,10,12 };	// ��ʼ��
	int a_2[] = { 1,2,3,4,5 };	// Ҳ���Բ��涨ά��ֱ�ӳ�ʼ��
	int a_3[5] = { 1,2,3 };	// �ȼ���a_3[]={0,1,2,0,0 }
	string str_[3]={ "ni","hao" };
	//	string str_error[3]={ "ni","hao","ma","?" };	// ��ŵ����ݲ��ܳ���ά��

	char c[3] = { "12" };	// �����һλ�ո�Ҳ�����ֶ���ӡ�\0��
	//	char c_1[3] = { "123" };	// char���һ����ſո�ֻ�ܷ�n-1���ַ�
	char c_1[] = { "1123456" };

	// ----------------���������͸�ֵ---------------
	//	char c2[] = c;
	//	char c2 = c;

	int* ptrs[10];
	//	int& refs[10] =/*?*/;	// ��������������
	int(*Parray)[10] = &arr;
	int(&arrRef)[10] = arr;	//arrRef ������һ����10������������

	int* (&arry)[10] = ptrs;	// arry�������ã�������10��ָ��

	string s_in[5];
	int i_in[5];

	cout << "out: ";

	// �ַ�����ʼ����Ϊ�ո� 
	for (auto i : s_out)
	{
		cout << i << " " << endl;
	}
	// �ⲿ int���� ��ʼ��Ϊȫ0
	for (auto i : i_out)
	{
		cout << i << " " << endl;
	}

	cout << "in: ";
	for (auto i : s_in)
	{
		cout << i << " " << endl;
	}
	//	�ڲ� int��ʼ��Ϊ�����
	for (auto i : i_in)
	{
		cout << i << " " << endl;
	}
	cout << "out: " << s_out << "   " << i_out << endl;
	cout << "in " << s_in << "   " << i_in << endl;
	


	// test3_5_2 31

	int a_31[10];
	for (int i = 0; i < 10; ++i)
	{
		a_31[i] = i + 1;
		cout << a_31[i]<<" ";
	}
	cout << endl;
	int a_32[10];
	for (int i = 0; i < 10; ++i)
	{
		a_32[i] = a_31[i];
		cout << ("%d: ",i) << a_32[i] << " ";
	}

	//vector 3_5_2 32
	cout << "vector: ";
	vector<int> ivec;// (10, 0);
	for (int i=0;i!=10;++i)
	{
	//	ivec[i] = i + 1;
		ivec.push_back(i + 1);

		cout << ivec[i] << " ";

	}

	int i_33[10] = {};
	i_33[1] += 1;	// ��Ҫ��ʼ�������������������
	cout << i_33[1];
}
