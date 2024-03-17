#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

ll sqr(ll a,ll b)
{
	ll k=a+b;
	ll tmp=sqrt(k);
	if(tmp*tmp==k)
		return 1;
	return 0;
}

ll b_search(ll a[],int l,int r,ll k)
{
	while(l<=r)
	{
		int tmp=(l+r)/2;
		if(a[tmp]==k)
			return 1;
		else if (a[tmp]<k)
			l=tmp+1;
		else 
			r=tmp-1;
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			a[i]=x*x;
		}
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
				if(sqr(a[i],a[j])&&b_search(a,j+1,n-1,a[i]+a[j])!=-1)
				{
					ok=1;
					break;	
				}
			if(ok) break;	
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}