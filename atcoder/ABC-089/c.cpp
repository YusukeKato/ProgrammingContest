#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long long A[5] = {0};
	for(int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		if(s[0] == 'M') ++A[0];
		else if(s[0] == 'A') ++A[1];
		else if(s[0] == 'R') ++A[2];
		else if(s[0] == 'C') ++A[3];
		else if(s[0] == 'H') ++A[4];
	}
	long long ans = 0;

	ans += A[0]*A[1]*A[2];
	ans += A[0]*A[1]*A[3];
	ans += A[0]*A[1]*A[4];

	ans += A[0]*A[2]*A[3];
	ans += A[0]*A[2]*A[4];

	ans += A[0]*A[3]*A[4];

	ans += A[1]*A[2]*A[3];
	ans += A[1]*A[2]*A[4];

	ans += A[1]*A[3]*A[4];

	ans += A[2]*A[3]*A[4];

	cout << ans << endl;

	return 0;
}
