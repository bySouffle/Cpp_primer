#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


int iab[] = { 99,1,2,3,4,5,6,7,8,100 };
int* i_end = end(iab);	// ֻ�ܷ��ں����ⲿ β��ָ�벻��ִ�н����ú͵�������
auto i_beg = begin(iab);

auto n = end(iab) - begin(iab);	//	ָ������Ľ������Ϊ ptrdiff_t ��size_tһ�� �з�������


int main()
{
	string nums[] = { "A","B","C" };
	string* p1 = &nums[0];
	string* p2 = nums;	// -> ͬ��
	cout << *p1 << " " << *p2 << " " << p1 << " " << p2;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto p3(ia);	// -> int *p3	
//	p3 = 42;	//	���ܸ�ָ�븳ֵ
	auto p3_1(&ia[0]);
	*p3 = 42;	//  �����ú����
	
	decltype(ia) ia2 = { 0,1,2,3,4,5,6,7,8,9 };	//*********10���������ɵ�����

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
	//	������
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
	//int* i_end = end(iab);	// ֻ�ܷ��ں����ⲿ β��ָ�벻��ִ�н����ú͵�������
	auto i_beg = begin(iab);
	i_end -= 1;
	cout << i_beg << " "<<*i_beg<<endl << i_end << " " <<*i_end<< endl;

	constexpr size_t sz1 = 100;
	int arr1[10] = { 10,11,12,13,14,15,16,17,18,19 };
	int* pr1 = arr1;
	int *pr2 = pr1 + 4;
	cout << *pr2<<endl;
	
	int* pr3 = arr1 + sz1;	// �������鷶Χ
	int* pr4 = arr1 + 20;	// �������鷶Χ
	cout << *pr3 << " " << *pr4 << endl;
	//auto n = end(arr1) - begin(arr1);


	vector<int> ivec = { 0,1,2,3,4 };
	auto pbeg = ivec.begin();
	auto pend = ivec.end();


}