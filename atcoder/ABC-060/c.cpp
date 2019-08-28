#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main()
{
	ll N, T; cin >> N >> T;
	vector<ll> t(N+1, INF);
	for(int i = 0; i < N; i++) cin >> t[i];
	ll time = 0;
	for(int i = 0; i < N; i++) {
		time += min(T, t[i+1] - t[i]);
	}
	cout << time << endl;
	return 0;
}
