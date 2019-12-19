#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> svec;
	string s;
	//while (cin>>s)
	//{
	//	//if(s!=" ")
	//		svec.push_back(s);
	//}

	//for (auto& i : svec)
	//{
	////	toupper(i);	//´íÎó
	//	for (auto& j : i)
	//	{
	//		j=toupper(j);
	//	}
	//	cout << i << endl;
	//}

	// 3_20
	vector<int> ivec = {1,2,3,4,5};
	//int n;
	//while (cin>>n)
	//{
	//	ivec.push_back(n);
	//}
	cout << ivec[0]<<ivec.size();

	for (decltype(ivec.size()) index = 0; index < ivec.size(); ++index)
	{
		cout << ivec[index] + ivec[ivec.size() - index-1] << endl;
	}


}