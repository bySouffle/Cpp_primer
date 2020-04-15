//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	//string 对象和 c字符串
//	string s("Hello world");
//
//	// char* str = s;	不能用string对象初始化*char
//	const char* ctr = s.c_str();
//
//	// 任何出现 字符串字面值的地方 都可以用 以空字符结束的字符数组 代替
//	// 反过来不成立
//
//	// vector
//	int int_arr[] = { 0,1,2,3,4,5,6,7 };
//	vector<int> ivec(begin(int_arr), end(int_arr));
//	// 也可以为一部分
//	vector<int> subVec(int_arr + 1, int_arr + 4);
//	for (auto i: ivec)
//	{
//		cout << i << endl;
//	}
//	 
//}