#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	vector<int> v{10, -10, 5, -5, 1, -1};
	int cnt = 0;
	while(A != B)
	{
		int diff = 0;
		int minv = 1<<29;
		for(int i = 0; i < v.size(); i++)
		{
			if(abs(B - (A+v[i])) < minv)
			{
				minv = abs(B - (A+v[i]));
				diff = v[i];
			}
		}
		A += diff;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
