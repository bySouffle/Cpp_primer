#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s("hello world!!!");
	if (s.begin() != s.end())
	{
		auto it = s.begin();	// �൱��ָ�룬����ʵ���޺��壬Ҳ�޵�ַ
		cout << *it << endl;
		*it = toupper(*it);
		cout << s << endl;

	//	vector<int>::iterator it;	//	�ܶ�д
		vector<int>::const_iterator it_1;

		string::iterator it2;	//	ֻ�ܶ�
		string::const_iterator it2_1;
		
		/*****	C++11 cbegin() cen() ����const_iterator	*****/
		auto it_11_b = s.cbegin();
		auto it_11_e = s.cend();

		cout << "-----------------------------------------------" << endl;
	}

	vector<string> svec{ "by","souffle","desu","QAQ" };	//	it_b->empty() == (*it_b).empty()
	auto it_b = svec.cbegin();
	auto it_e = svec.cend();
	for (it_b; it_b != it_e && !it_b->empty(); ++it_b)
	{
		cout << *it_b << endl;
	}

	auto it_bc = svec.cbegin();
	auto it_ec = svec.cend();
	for (it_bc; it_bc != it_ec && !(*it_bc).empty(); ++it_bc)
	{
		cout << *it_bc << endl;
	}

	//	ʹ���˵������Ͳ�Ҫʹ��	push_back

}