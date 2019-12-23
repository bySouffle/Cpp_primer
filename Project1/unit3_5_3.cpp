#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


int iab[] = { 99,1,2,3,4,5,6,7,8,100 };
int* i_end = end(iab);	// 只能放在函数外部 尾后指针不能执行解引用和递增操作
auto i_beg = begin(iab);

auto n = end(iab) - begin(iab);	//	指针相减的结果类型为 ptrdiff_t 与size_t一样 有符号类型


int main()
{
	string nums[] = { "A","B","C" };
	string* p1 = &nums[0];
	string* p2 = nums;	// -> 同上
	cout << *p1 << " " << *p2 << " " << p1 << " " << p2;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto p3(ia);	// -> int *p3	
//	p3 = 42;	//	不能给指针赋值
	auto p3_1(&ia[0]);
	*p3 = 42;	//  解引用后可以
	
	decltype(ia) ia2 = { 0,1,2,3,4,5,6,7,8,9 };	//*********10个整数构成的数组

//	ia2 = 3;	
	ia2[0] = 21;
	cout << endl;

//	ia2 = p;	
	ia2[0] = 21;
	int *p4 = ia2;
	//------------------------

	int* pa = &ia[0];
	int* pb = ia;
	int* pc(ia);
	int* pd(&ia[0]);
	cout << *pa << " " << *pb << " " << *pc;

	cout << endl << endl;
	//	迭代器
	int *end = &ia2[10];
//	auto end(ia2[10]);
	for (int* start = ia2; start != end; ++start)
	{
		cout << *start << " ";
		cout << start << " " << end << endl;
	}

	int a = 3;
	int* pp(&a);

	cout << *pp;

	//***************************************************************
	//	begin	end
	int iab[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* i_end = end(iab);	// 只能放在函数外部 尾后指针不能执行解引用和递增操作
	auto i_beg = begin(iab);
	i_end -= 1;
	cout << i_beg << " "<<*i_beg<<endl << i_end << " " <<*i_end<< endl;

	constexpr size_t sz1 = 100;
	int arr1[10] = { 10,11,12,13,14,15,16,17,18,19 };
	int* pr1 = arr1;
	int *pr2 = pr1 + 4;
	cout << *pr2<<endl;
	
	int* pr3 = arr1 + sz1;	// 超出数组范围
	int* pr4 = arr1 + 20;	// 超出数组范围
	cout << *pr3 << " " << *pr4 << endl;
	//auto n = end(arr1) - begin(arr1);


	vector<int> ivec = { 0,1,2,3,4 };
	auto pbeg = ivec.begin();
	auto pend = ivec.end();


}