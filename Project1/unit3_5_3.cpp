//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string nums[] = {"one", "two", "three" };
//	string* p = &nums[0];	// p指向nums第一个元素
//	string* p2 = nums;		// 等价上
//
//	int ia[] = { 0,1,2,3,4,5,6 };
//	auto pa(ia);	//pa为int类型指针指向ia的第一个元素 ==> auto *pa(&ia[0])
//
//	int* b = ia;
//	int* e = &ia[6];
//	for (int* b = ia; b != e; ++b)
//		cout << *b << endl;
//
//	// 指针也是迭代器
//	int* be = begin(ia);
//	int* last = end(ia);
//	while (be != last && *be >= 0)
//	{
//		cout << *be << endl;
//		++be;
//	}
//
//
//}