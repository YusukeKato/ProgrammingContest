#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int S = 11;

	for(int i = 1; i < 10; i++)
	{
		for(int j = 1; j < 10; j++)
		{
			for(int k = 1; k < 10; k++)
			{
				int s = (i + j + k) / 2;
				int ss = sqrt(s * (s-i) * (s-j) * (s-k));
				if(S == ss)
				{
					cout << "a:" << i << " b:" << j << " c:" << k << endl;
					return 0;
				}
			}
		}
	}
}
