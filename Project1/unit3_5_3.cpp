//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string nums[] = {"one", "two", "three" };
//	string* p = &nums[0];	// pָ��nums��һ��Ԫ��
//	string* p2 = nums;		// �ȼ���
//
//	int ia[] = { 0,1,2,3,4,5,6 };
//	auto pa(ia);	//paΪint����ָ��ָ��ia�ĵ�һ��Ԫ�� ==> auto *pa(&ia[0])
//
//	int* b = ia;
//	int* e = &ia[6];
//	for (int* b = ia; b != e; ++b)
//		cout << *b << endl;
//
//	// ָ��Ҳ�ǵ�����
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