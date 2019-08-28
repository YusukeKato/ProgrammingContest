#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int A[200010] = {0};
	int M[200010] = {0};
	cin >> N;
	for(int i = 1; i <= N; i++) cin >> A[i];

	int n = N;
	while(n != 0)
	{
		int nn = n / 2 + 1;
		for(int i = n; i >= nn; i--)
		{
			//if(M[i] == 0 and i != 0)
			if(i != 0)
			{
				long long int sum = 0;
				for(int s = 2; i * s <= n; s++)
				{
					int k = i * s;
					sum += M[k];
				}
				
				int ans = sum % 2;
				if(ans != A[i]) M[i] = 1;
				else M[i] = -1;
			}
		}

		n /= 2;
	}

	int cnt = 0;
	for(int i = 1; i <= N; i++)
	{
		if(M[i] == 1) cnt++;
	}
	cout << cnt << endl;
	for(int i = 1; i <= N; i++)
	{
		if(M[i] == 1) cout << i << " ";
	}
	cout << endl;


	return 0;
}
