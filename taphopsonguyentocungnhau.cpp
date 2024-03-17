#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll Sum(ll n)
{
	ll result=0;
	for(int i=1;i<=n;i++)
		result+=i;
	return result;	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll sum=Sum(n);
		if(sum%2==1&&m%2==1||sum%2==0&&m%2==0)
		{
			ll l=(sum+m)/2;
			ll r=(sum-m)/2;
			if(__gcd(l,r)==1) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else cout<<"No\n";
	}
}