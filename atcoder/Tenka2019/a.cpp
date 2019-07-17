#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	while(A != B)
	{
		if( A == C )
		{
			cout << "Yes" << endl;
			return 0;
		}
		if( A > B ) --A;
		else ++A;
	}

	cout << "No" << endl;

	return 0;
}
