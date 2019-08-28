#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll H, W; cin >> H >> W;
	// 三分割
	ll sub = H*W/3.0;
	double sub2 = sub;
	double sub3 = (double)(H*W/3.0);
	double sub4 = sub3 - sub2;
	ll S3 = sub;
	if(sub4 > 0.5) S3 += 1;
	cout << "sub:" << sub << endl;
	cout << "sub2:" << sub2 << endl;
	cout << "sub3:" << sub3 << endl;
	cout << "sub4:" << sub4 << endl;
	cout << "S3:" << S3 << endl;
	int ih, iw;
	ll S1h = 1e18;
	ll S1w = 1e18;
	for(int i = 1; i < H; i++) {
		ll s = W*i;
		if(abs(S3-S1h) > abs(S3-s)) {
			S1h = s;
			ih = i;
		}
	}
	for(int i = 1; i < W; i++) {
		ll s = H*i;
		if(abs(S3-S1w) > abs(S3-s)) {
			S1w = s;
			iw = i;
		}
	}
	ll ans1;
	if(abs(S3-S1h) < abs(S3-S1w)) {
		ans1 = S1h;
		H -= ih;
	}
	else {
		ans1 = S1w;
		W -= iw;
	}
	cout << "H:" << H << " W:" << W << endl;

	// 残ったブロックを二分割
	sub = H*W/2.0;
	sub2 = sub;
	sub3 = (double)(H*W/2.0);
	sub4 = sub3 - sub2;
	ll S2 = sub;
	if(sub4 > 0.5) S2 += 1;
	ll S2h = 1e18;
	ll S2w = 1e18;
	for(int i = 1; i < H; i++) {
		ll s = W*i;
		if(abs(S2-S2h) > abs(S2-s)) {
			S2h = s;
			ih = i;
		}
	}
	for(int i = 1; i < W; i++) {
		ll s = H*i;
		if(abs(S2-S2w) > abs(S2-s)) {
			S2w = s;
			iw = i;
		}
	}
	ll ans2;
	if(abs(S2-S2h) < abs(S2-S2w)) {
		ans2 = S2h;
		H -= ih;
	}
	else {
		ans2 = S2w;
		W -= iw;
	}
	cout << "H:" << H << " W:" << W << endl;

	// 残ったブロックの面積
	ll ans3 = H*W;

	ll Smax = max(ans1, max(ans2, ans3));
	ll Smin = min(ans1, min(ans2, ans3));

	ll ans = Smax - Smin;
	cout << ans << endl;
	return 0;
}
