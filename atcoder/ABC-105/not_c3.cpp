#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// input
	long long N;
	cin >> N;

	if(N == 0)
	{
		cout << '0' << endl;
		return 0;
	}

	// create data
	vector<long long> v1;
	vector<long long> v2;
	long long tmp1 = 1;
	long long tmp2 = -1;
	for(int i = 0; i < 32; i++)
	{
		v1.push_back(tmp1);
		v2.push_back(tmp2);
		tmp1 *= -2;
		tmp2 *= -2;
	}

	// search
	vector<int> ans;
	while(N != 0)
	{
		int idx = -1;
		int flag = -1;
		long long minval = 1e12;
		for(int i = 0; i < 31; i++)
		{
			long long val1 = N - v1[i];
			long long val2 = N - v2[i];
			long long val = 1e12;
			int tmp_flag = -1;
			if(abs(val1) <= abs(val2))
			{
				tmp_flag = 1;
				val = val1;
			}
			else
			{
				tmp_flag = 2;
				val = val2;
			}

			if(abs(minval) > abs(val))
			{
				minval = val;
				idx = i;
				flag = tmp_flag;
			}
		}

		// result
		if(flag == 1)
		{
			N -= v1[idx];
			ans.push_back(idx);
		}
		else if(flag == 2)
		{
			N -= v2[idx];
			ans.push_back(idx);
			ans.push_back(idx+1);
		}
	}

	// output
	sort(ans.begin(), ans.end());
	
	vector<char> ans2;
	for(int i = 0; i <= ans[ans.size()-1]; i++)
	{
		bool flag = false;
		for(int j = 0; j < ans.size(); j++)
		{
			if(i == ans[j])
			{
				flag = true;
				break;
			}
		}
		if(flag == true) ans2.push_back('1');
		else if(flag == false) ans2.push_back('0');
	}

	for(int i = ans2.size()-1; i >= 0; i--)
	{
		cout << ans2[i];
	}
	cout << endl;

	return 0;
}
