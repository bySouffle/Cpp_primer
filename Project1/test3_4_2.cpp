#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	
	vector<int> ivec;
	int num;
	while (cin>>num)
	{
		ivec.push_back(num);
	}

	//	相邻
	auto itb_ivec = ivec.begin();
	auto ite_ivec = ivec.end();
	/*auto vec_size = ivec.size() / 2;
	cout << vec_size<<endl;*/
	if (ivec.size() % 2 == 1)	//it_end为最后一个节点后一个	奇数个
	{
		for (itb_ivec; itb_ivec != (ite_ivec-1); itb_ivec += 2)
		{
			auto sum_lr = *itb_ivec + *(itb_ivec + 1);
			cout << sum_lr<<" ";
		}
	}
	// 偶数个
	else  
	{
		
		for (itb_ivec; itb_ivec != (ite_ivec); itb_ivec += 2)
		{
			auto sum_lr = *itb_ivec + *(itb_ivec + 1);
			cout << sum_lr<<" ";
		}
	}


	cout << endl;
	//	头尾
	auto itb2_ivec = ivec.begin();
	auto ite2_ivec = ivec.end();
	auto itm_ivec = itb2_ivec + (ite2_ivec - itb2_ivec)/2;
	ite2_ivec -= 1;
	// 奇数个
	if ((ite2_ivec - itb2_ivec) % 2 == 0)
	{
		
		while (itb2_ivec != ite2_ivec)
		{
			auto sum_se = *itb2_ivec + *(ite2_ivec);
			++itb2_ivec;
			--ite2_ivec;
			cout << sum_se << " ";
		}
	}
	// 偶数个
	else
	{
		while (itb2_ivec != itm_ivec)
		{
			auto sum_se = *itb2_ivec + *(ite2_ivec);
			++itb2_ivec;
			--ite2_ivec;
			cout << sum_se << " ";
		}
	}

	//3.25
	vector<int> sources{ 42,65,95,100,39,67,95,76,88,76,83,92,76,93 };
	vector<int> sort_up(11, 0);

	auto itb = sort_up.begin();

	for(auto source : sources)
	{
		cout << source << " ";
		auto sort_in = source / 10;
		++* (itb + sort_in);
	}
	cout << endl;
	for (auto sort : sort_up)
	{
		cout << sort << " ";
	}

}

