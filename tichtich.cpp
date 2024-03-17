#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n],b[m];
		ll Max=-1e9;
		ll Min=1e9;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			Max=max(a[i],Max);
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			Min=min(b[i],Min);
		}
		long long result=Min*Max;
		cout<<result<<"\n";
	}
}