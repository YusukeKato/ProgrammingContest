#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int H, W;
vector<vector<char>> field(1001, vector<char>(1001));
vector<vector<int>> cmap(1001, vector<int>(1001, 0));
vector<ll> data(1001);
vector<ll> ans{0, 0, 0};
int color = 1;
int color_cnt = 1;
int cnt = 0;

void painting(int i, int j)
{
	if(cmap[i][j] != 0) return;
	cmap[i][j] = color;
	cnt++;
	if(i > 0 and field[i-1][j] == 'o' and cmap[i-1][j] == 0) painting(i-1, j);
	if(j > 0 and field[i][j-1] == 'o' and cmap[i][j-1] == 0) painting(i, j-1);
	if(i < H-1 and field[i+1][j] == 'o' and cmap[i+1][j] == 0) painting(i+1, j);
	if(j < W-1 and field[i][j+1] == 'o' and cmap[i][j+1] == 0) painting(i, j+1);

	if(i > 0 and j > 0 and field[i-1][j-1] == 'o' and field[i-1][j] == '.' and field[i][j-1] == '.' and cmap[i-1][j-1] == 0) painting(i-1, j-1);
	if(i < H-1 and j > 0 and field[i+1][j-1] == 'o' and field[i+1][j] == '.' and field[i][j-1] == '.' and cmap[i+1][j-1] == 0) painting(i+1, j-1);
	if(i > 0 and j < W-1 and field[i-1][j+1] == 'o' and field[i-1][j] == '.' and field[i][j+1] == '.' and cmap[i-1][j+1] == 0) painting(i-1, j+1);
	if(i < H-1 and j < W-1 and field[i+1][j+1] == 'o' and field[i+1][j] == '.' and field[i][j+1] == '.' and cmap[i+1][j+1] == 0) painting(i+1, j+1);
	
	return;
}

void painting2(int i, int j)
{
	cmap[i][j] = -1;
	cnt++;
	if(cnt == data[color]) return;
	if(i > 0 and cmap[i-1][j] == color) painting2(i-1, j);
	if(j > 0 and cmap[i][j-1] == color) painting2(i, j-1);
	if(i < H-1 and cmap[i+1][j] == color) painting2(i+1, j);
	if(j < W-1 and cmap[i][j+1] == color) painting2(i, j+1);

	if(i > 0 and j > 0 and cmap[i-1][j] == 0 and cmap[i][j-1] == 0 and cmap[i-1][j-1] == color) {
		painting2(i-1, j-1);
		color_cnt++;
	}
	if(i < H-1 and j > 0 and cmap[i+1][j] == 0 and cmap[i][j-1] == 0 and cmap[i+1][j-1] == color) {
		painting2(i+1, j-1);
		color_cnt++;
	}
	if(i > 0 and j < W-1 and cmap[i-1][j] == 0 and cmap[i][j+1] == 0 and cmap[i-1][j+1] == color) {
		painting2(i-1, j+1);
		color_cnt++;
	}
	if(i < H-1 and j < W-1 and cmap[i+1][j] == 0 and cmap[i][j+1] == 0 and cmap[i+1][j+1] == color) {
		painting2(i+1, j+1);
		color_cnt++;
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
	//painting
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(field[i][j] == 'o' and cmap[i][j] == 0) {
				painting(i, j);
				data[color] = cnt;
				cnt = 0;
				color++;
			}
		}
	}
	//painting2
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(cmap[i][j] > 0) {
				color = cmap[i][j];
				color_cnt = 1;
				painting2(i, j);
				cout << color_cnt << endl;
				cnt = 0;
			}
		}
	}
	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	return 0;
}
