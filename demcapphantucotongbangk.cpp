#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n],cnt=0;
		map <ll,ll> mp;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(mp[k-a[i]]>0)
			{
				if(a[i]!=k-a[i])cnt+=mp[k-a[i]];
				else cnt+=mp[k-a[i]]-1;
			}
		}
		cout<<cnt/2<<endl;
	}
}