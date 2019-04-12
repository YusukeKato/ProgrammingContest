#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll N;
	cin >> N;
	ll A[N];
	for(int i = 0; i < N; i++) cin >> A[i];

	ll cnt = 0;
	for(int i = 0; i < N; i++)
	{
		while(A[i] % 2 == 0)
		{
			if(A[i] % 2 == 0)
			{
				cnt++;
				A[i] /= 2;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
