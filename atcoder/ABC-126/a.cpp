#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	string S;
	int N;
	int K;
	cin >> K >> N;
	cin >> S;

	S[N-1] = S[N-1] - 'A' + 'a';

	for(int i = 0; i < S.size(); i++) cout << S[i];
	cout << endl;

	return 0;
}
