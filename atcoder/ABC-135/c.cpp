#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int64_t N;
	vector<int64_t> A(100010, 0);
	vector<int64_t> B(100010, 0);
	cin >> N;
	for(int i = 0; i < N+1; i++) cin >> A[i];
	for(int i = 0; i < N; i++) cin >> B[i];

	int64_t cnt = 0;
	int64_t pnt = 0;
	for(int i = 0; i < N; i++)
	{
		if(A[i] <= pnt)
		{
			cnt += A[i];
			A[i] = 0;
		}
		else
		{
			cnt += pnt;
			A[i] -= pnt;
		}
		pnt = 0;

		if(A[i] <= B[i])
		{
			cnt += A[i];
			pnt = B[i] - A[i];
		}
		else
		{
			cnt += B[i];
		}
	}

	//A_N+1
	if(A[N] <= pnt)
	{
		cnt += A[N];
	}
	else
	{
		cnt += pnt;
	}


	cout << cnt << endl;

	return 0;
}
