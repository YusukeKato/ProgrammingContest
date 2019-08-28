#include <iostream>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main()
{
	ll H, W; cin >> H >> W;
	ll ans = INF;
	for(int h = 1; h < H; h++) {
		ll h2 = (H - h) / 2;
		if(h2 > 0) {
			ll S1 = W * h;
			ll S2 = W * h2;
			ll S3 = W * (H - h - h2);
			ll Smax = max(S1, max(S2, S3));
			ll Smin = min(S1, min(S2, S3));
			ans = min(ans, Smax-Smin);
		}
		ll w2 = W / 2;
		if(w2 > 0) {
			ll S1 = W * h;
			ll S2 = (H-h) * w2;
			ll S3 = (H-h) * (W - w2);
			ll Smax = max(S1, max(S2, S3));
			ll Smin = min(S1, min(S2, S3));
			ans = min(ans, Smax-Smin);
		}
	}
	for(int w = 0; w < W; w++) {
		ll w2 = (W - w) / 2;
		if(w2 > 0) {
			ll S1 = H * w;
			ll S2 = H * w2;
			ll S3 = H * (W - w - w2);
			ll Smax = max(S1, max(S2, S3));
			ll Smin = min(S1, min(S2, S3));
			ans = min(ans, Smax-Smin);
		}
		ll h2 = H / 2;
		if(h2 > 0) {
			ll S1 = H * w;
			ll S2 = (W-w) * h2;
			ll S3 = (W-w) * (H - h2);
			ll Smax = max(S1, max(S2, S3));
			ll Smin = min(S1, min(S2, S3));
			ans = min(ans, Smax-Smin);
		}
	}
	cout << ans << endl;
	return 0;
}
