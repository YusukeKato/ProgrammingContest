#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<string> field(10010);
int ans[3] = {0};
int cnt = 0;

void painting(int i, int j)
{
	for(int x: dx) {
		for(int y: dy) {
			if(field[i+x][j+y] == 'o') {
				cnt++;
				field[i+x][j+y] = '.';
				painting(i+x, j+y);
			}
		}
	}
	return;
}

int check(int a)
{
	for(int i = 2; i*i <= a; i++) {
		while(a % (i*i) == 0) a /= (i*i);
	}
	return a;
}

int main()
{
	int H, W; cin >> H >> W;
	for(int i = 0; i < H; i++) {
		cin >> field[i];
	}
	for(int i = 1; i < H-1; i++) {
		for(int j = 1; j < W-1; j++) {
			if(field[i][j] == 'o') {
				cnt = 0;
				painting(i, j);
				int a = check(cnt);
				if(a == 3) ans[0]++;
				else if(a == 1) ans[1]++;
				else if(a == 11) ans[2]++;
			}
		}
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	return 0;
}
