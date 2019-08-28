#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int N;
	ll K;
	cin >> N >> K;
	const ll mod = 1000000007;
	vector<int> A(N);
	ll ans = 0;
	for(int i = 0; i < N; i++) cin >> A[i];
	for(int i = 0; i < N-1; i++) {
		for(int j = i+1; j < N; j++) {
			if(A[i] > A[j]) {
				ans += K*(K+1) / 2LL;
				ans %= mod;
			}
			else if(A[i] < A[j]) {
				ans += K*(K-1) / 2LL;
				ans %= mod;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
