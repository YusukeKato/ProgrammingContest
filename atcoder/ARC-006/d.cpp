#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int H, W;
vector<vector<char>> field(1001, vector<char>(1001));
vector<vector<int>> cmap(1001, vector<int>(1001, 0));
vector<ll> ans{0, 0, 0};
bool flag = true;
int color = 1;
int cnt = 1;

void painting(int i, int j)
{
	if(cmap[i][j] != 0) return;
	cmap[i][j] = color;

	if(i > 0 and field[i-1][j] == 'o' and cmap[i-1][j] == 0) painting(i-1, j);
	if(j > 0 and field[i][j-1] == 'o' and cmap[i][j-1] == 0) painting(i, j-1);
	if(i < H-1 and field[i+1][j] == 'o' and cmap[i+1][j] == 0) painting(i+1, j);
	if(j < W-1 and field[i][j+1] == 'o' and cmap[i][j+1] == 0) painting(i, j+1);

	if(i > 0 and j > 0 and field[i-1][j-1] == 'o' and field[i-1][j] == '.' and field[i][j-1] == '.' and cmap[i-1][j-1] == 0) {
		cnt++;
		color++;
		painting(i-1, j-1);
	}
	else if(i < H-1 and j > 0 and field[i+1][j-1] == 'o' and field[i+1][j] == '.' and field[i][j-1] == '.' and cmap[i+1][j-1] == 0) {
		cnt++;
		color++;
		painting(i+1, j-1);
	}
	else if(i > 0 and j < W-1 and field[i-1][j+1] == 'o' and field[i-1][j] == '.' and field[i][j+1] == '.' and cmap[i-1][j+1] == 0) {
		cnt++;
		color++;
		painting(i-1, j+1);
	}
	else if(i < H-1 and j < W-1 and field[i+1][j+1] == 'o' and field[i+1][j] == '.' and field[i][j+1] == '.' and cmap[i+1][j+1] == 0) {
		cnt++;
		color++;
		painting(i+1, j+1);
	}
	
	return;
}

int main()
{
	cin >> H >> W;
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			char c; cin >> c;
			field[i][j] = c;
		}
	}
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(field[i][j] == 'o' and cmap[i][j] == 0) {
				painting(i, j);
				cout << cnt << endl;
				if(cnt == 4) ans[0]++;
				else if(cnt == 3) ans[1]++;
				else if(cnt == 5) ans[2]++;
				cnt = 0;
				color = 1;
				flag = true;
			}
		}
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	return 0;
}
