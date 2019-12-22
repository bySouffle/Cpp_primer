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
	//	string bad[cnt];	//cnt必须是常量
	string strs[sz];

	// ------------------总结： 数组的维度引用的话必须是const类型 constexpr-------------------

	const unsigned sz_2 = 3;
	int ial[sz_2] = { 0,10,12 };	// 初始化
	int a_2[] = { 1,2,3,4,5 };	// 也可以不规定维度直接初始化
	int a_3[5] = { 1,2,3 };	// 等价于a_3[]={0,1,2,0,0 }
	string str_[3]={ "ni","hao" };
	//	string str_error[3]={ "ni","hao","ma","?" };	// 存放的数据不能超过维度

	char c[3] = { "12" };	// 最后有一位空格，也可以手动添加‘\0’
	//	char c_1[3] = { "123" };	// char最后一个存放空格，只能放n-1个字符
	char c_1[] = { "1123456" };

	// ----------------不允许拷贝和赋值---------------
	//	char c2[] = c;
	//	char c2 = c;

	int* ptrs[10];
	//	int& refs[10] =/*?*/;	// 不存在引用数组
	int(*Parray)[10] = &arr;
	int(&arrRef)[10] = arr;	//arrRef 引用了一个含10个整数的数组

	int* (&arry)[10] = ptrs;	// arry数组引用，该数组10个指针

	string s_in[5];
	int i_in[5];

	cout << "out: ";

	// 字符串初始化都为空格 
	for (auto i : s_out)
	{
		cout << i << " " << endl;
	}
	// 外部 int数组 初始化为全0
	for (auto i : i_out)
	{
		cout << i << " " << endl;
	}

	cout << "in: ";
	for (auto i : s_in)
	{
		cout << i << " " << endl;
	}
	//	内部 int初始化为随机数
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
	i_33[1] += 1;	// 先要初始化，否则里面有随机数
	cout << i_33[1];
}
