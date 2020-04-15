//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	// 3.37 字符数组后为空格
//	const char ca[] = { 'a','b','c','d' ,'\0'};
//	const char* co = ca;
//	while (*co)
//	{
//		cout << *co << endl;
//		++ co;
//	}
//	
//	cout << "-----------------------------" << endl;
//
//	//3.40 
//	const char a[] = "hello";
//	const char b[] = "world";
//
//	// string largeStr = a + ' ' + b;
//	
//	char result[12] = {};
//	strcpy_s(result, a);
//	strcat_s(result, " ");a
//	strcat_s(result, b);
//
//	auto s = begin(result);
//	auto e = end(result);
//	for (auto s : result)
//	{
//		cout <<  s << endl;
//		++s;
//	}
//
//	
//
//
//}