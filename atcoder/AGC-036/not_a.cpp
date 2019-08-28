#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int64_t> divisor(int64_t n) {
	vector<int64_t> ret;
	int64_t sn = n / 10000;
	for(int64_t i = 2; i * i <= n-1; i++) {
		if(n % i == 0) {
			ret.push_back(i);
			cout << i << endl;
			//if(i * i != n) ret.push_back(n / i);
		}
	}
	sort(begin(ret), end(ret));
	return (ret);
}

int main()
{
	int64_t S;
	cin >> S;
//	cout << S << endl;

	if(S <= 1000000000)
	{
		cout << "0 0 " << "0 1 " << S << " 0" << endl;
		return 0;
	}
	else
	{
		vector<int64_t> v = divisor(S);
		int64_t max = 1;
		for(int i = v.size()-1; i >= 0; i--)
		{
			if(S % v[i] == 0)
			{
				S /= v[i];
				max *= v[i];
			}
			if(S <= 1000000000) break;
		}

		cout << "0 0 " << "0 " << S << " " << max << " 0" << endl;

		int64_t ans = S * max;
		cout << ans << endl;
		return 0;
	}

	return 0;
}
