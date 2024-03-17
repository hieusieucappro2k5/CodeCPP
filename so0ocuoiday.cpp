#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(auto &x:a) cin>>x;
		for(int i=0;i<n;i++)
			if(a[i]!=0) cout<<a[i]<<" ";
		for(int i=0;i<n;i++)
			if(a[i]==0) cout<<a[i]<<" ";
		cout<<endl;	
	}
}