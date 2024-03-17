#include<bits/stdc++.h>
#define endl "\n";

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int sum=0;
		for(int i=0; i<10; i++) 
		{
			while(n) 
			{
				sum+=n%10;
				n/=10;
			}
			if(sum<10) break;
			else 
			{
				n=sum;
				sum=0;
			}
		}
		cout<<sum<<endl;
	}
}