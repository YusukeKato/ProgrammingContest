#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	long long int K;
	cin >> N >> K;

	vector<long long int> A(100010, 0);
	for(int i = 0; i < N; i++) cin >> A[i];

	int right = 0;
	long long int sum = 0;
	long long int ans = 0;
	for(int left = 0; left < N; left++)
	{
		while(right < N and sum < K)
		{
			sum += A[right];
			right++;
		}

		if(sum < K) break;
		ans += N - right + 1;
		
//		if(right == left) right++;
//		else sum -= A[left];
		sum -= A[left];
	}

	cout << ans << endl;

	return 0;
}
