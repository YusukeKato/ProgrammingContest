#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;long long int K;
	cin>>N>>K;
	vector<long long int>A(N);
	for(int i=0;i<N;++i){
		cin>>A[i];
	}
	long long int answer=0;
	long long int sum=0;

	int r=0;
	for(int l=0;l<N;++l){

		while(sum<K){
			if(r==N)break;
			else{
				sum+=A[r];
				r++;
			}
		}
		if(sum<K)break;
		answer+=N-r+1;
		sum-=A[l];
	}
	cout<<answer<<endl;
	return 0;
}
