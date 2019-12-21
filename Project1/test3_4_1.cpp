#include<iostream>
#include<vector>	
#include<string>

using namespace std;

//int main()
//{
//	//	p94 3_16
//	vector<int> ivec(10,22);
//	auto it_b = ivec.cbegin();
//	auto it_e = ivec.cend();
//	for (it_b; it_b != it_e; ++it_b)
//	{
//		cout << *it_b << " ";
//	}
//	cout << endl<<endl;
//
//
//	//	3_22
//	vector<string> svec;
//	string s;
//
//	
//
//	while (cin >> s)		
//	{
//		svec.push_back(s);
//	}
//	
//	auto it_b_s = svec.begin();
//	auto it_e_s = svec.end();
//	
//	//	向量转换大小写要先存放到string中 向量是相同元素的集合["abc",'def'] string("nihaomamamamama")
//	/*
//	if (it_b_s != it_e_s)
//	{
//		*it_b_s = toupper(*it_b_s);
//	}
//
//	for (it_b_s; it_b_s != it_e_s&&!(*it_b_s).empty(); ++it_b_s)
//	{
//		auto it_b = svec.begin();
//		*it_b = toupper(*it_b);
//		cout << *it_b_s << " " << endl;
//
//	}*/
//
//	for (auto st : svec)
//	{
//		auto itb_st = st.begin();
//		auto ite_st = st.end();
//
//		for (itb_st;itb_st != ite_st;++itb_st)
//		{
//			
//			*itb_st = toupper(*itb_st);
//		}
//		
//		cout << st << " ";
//	}
//	
//
//
//	
//	//	3_23
//	vector<int> ivec_3_23(10, 22);
//	auto it_3_23_b = ivec_3_23.begin();
//	auto it_3_23_e = ivec_3_23.end();
//
//	for (it_3_23_b; it_3_23_b != it_3_23_e; ++it_3_23_b)
//	{
//		*it_3_23_b = (*it_3_23_b) * 2;
//		cout << *it_3_23_b<<" ";
//	}
//
//
//
//}