#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
	ll A, B;
	cin >> A >> B;

	ll ans = 0;

	if(A >= B)
	{
		ans += A;
		--A;
	}
	else if(B > A)
	{
		ans += B;
		--B;
	}

	if(A >= B)
	{
		ans += A;
		--A;
	}
	else if(B > A)
	{
		ans += B;
		--B;
	}

	cout << ans << endl;

	return 0;
}
