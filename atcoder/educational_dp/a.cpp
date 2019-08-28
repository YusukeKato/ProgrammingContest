#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> H(N);
	for(int i = 0; i < N; i++) cin >> H[i];

	vector<int> C(N);
	C[0] = 0;
	C[1] = abs(H[1] - H[0]);
	for(int i = 2; i < N; i++)
	{
		int a = abs(H[i] - H[i-1]) + C[i-1];
		int b = abs(H[i] - H[i-2]) + C[i-2];
		C[i] = min(a, b);
	}

	cout << C[N-1] << endl;

	return 0;
}
