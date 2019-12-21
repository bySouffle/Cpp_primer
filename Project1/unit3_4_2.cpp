#include<iostream>
#include<string>
#include<vector>

using namespace std;

//int main()
//{
//	string st{"12345678"/*'1','2','3','4','5','6','7'*/};
//	cin >> st;
//
//	//char s;		//!!!!!!!!!!!!!!!!!!	使用push_back报错 
//	//while (cin>>s)
//	//{	
//	//	st.push_back(s);		//使用push_back后迭代器会失效
//	//}
//
//
//	for (auto i : st)
//	{
//		cout << i << endl;
//	}
//
//	auto it_beg = st.begin();
//	auto it_end = st.end();	// 指向最后一个节点的下一个节点
//	auto it_mid = st.begin() + (it_end - it_beg) / 2;
//	
//	cout <<"mid: "<< *it_mid <<endl << endl;
//
//
//	cout << "target:";
//	
//	//auto sc='6';
//	char sc;
//	cin >> sc;
////	for(it_mid;*it_mid<sc&&(it_mid!=(it_beg)||it_mid!=(it_end));
//	while ((it_mid != it_beg || it_mid != it_end) && *it_mid != sc)
//	{
//		if (!st.empty() && *it_mid>sc)
//		{
//			--it_mid;
//		}
//		if (!st.empty() && *it_mid < sc)
//		{
//			it_mid +=(it_end-it_mid) / 2;
//		}
//		
//	}
//	cout << *it_mid;



	//string s="ABCDEFG";
	////char i;
	///*while (cin>>i)
	//{
	//	s.push_back(i);
	//	if (cin.get()=='\n')
	//	{
	//		break;
	//	}

	//	
	//}*/
	//for (auto j : s)
	//{
	//	cout << j;
	//}
	//cout << "done!" << endl;
	////cin.get();
	//cout << s[5];

	////auto it_a = s.end();	//
	//auto it_b = s.begin();
	////*it_a = tolower(*it_a);
	//*it_b = tolower(*it_b);

	//cout << s << *it_b<<endl;
//}