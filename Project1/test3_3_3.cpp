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
	////	toupper(i);	//错误
	//	for (auto& j : i)
	//	{
	//		j=toupper(j);
	//	}
	//	cout << i << endl;
	//}

	// 3_20
	vector<int> ivec;
	int n;
	while (cin>>n)
	{
		ivec.push_back(n);
	}
	cout << ivec[0]<<ivec.size();

	cout << "相邻：";
	if (ivec.size() % 2 == 0)
	{
		for (decltype(ivec.size()) index_1=0; index_1 < ivec.size(); index_1 += 2)
		{
			cout << ivec[index_1] + ivec[index_1 + 1]<<" ";
		}
	}

	else {
		for (decltype(ivec.size()) index_1 = 0; index_1 < ivec.size()-1; index_1 += 2)
		{
			cout << ivec[index_1] + ivec[index_1 + 1]<<" ";
		}

	}
	
	cout <<endl<< "第一项和最后一项："<<endl;
	for (decltype(ivec.size()) index = 0; index < ivec.size()/2; ++index)
	{
		cout << ivec[index] + ivec[ivec.size() - index-1] << endl;
	}


}