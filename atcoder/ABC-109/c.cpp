#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	int N, X;
	cin >> N >> X;
	vector<int> v(N+1, 0);
	v[0] = X;
	for(int i = 1; i < N+1; i++) cin >> v[i];

	sort(v.begin(), v.end());

	vector<int> dv(N, 0);
	for(int i = 0; i < dv.size(); i++)
	{
		int tmp = abs(v[i+1] - v[i]);
		dv[i] = tmp;
	}

	sort(dv.begin(), dv.end());

	int val = dv[0];
	for(int i = 1; i < dv.size(); i++)
	{
		if(val >= dv[i]) val = gcd(dv[i], val);
		else val = gcd(val, dv[i]);
	}

	cout << val << endl;

	return 0;
}
