#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const int MOD=1e9+7;

ll Sum(ll a[],int n)
{
	ll sum=1;
	for(int i=0;i<n;i++)
		sum=(sum%MOD*a[i]%MOD)%MOD;
	return sum;	 
}

ll Gcd(ll a[],int n)
{
	ll result=a[0];
	for(int i=0;i<n;i++)
		result=__gcd(result,a[i]);
	return result;	
}

ll Pow(ll hx,ll gx)
{
	ll res=1;
	for(int i=0;i<gx;i++)
	{
		res=(res%MOD*hx%MOD)%MOD;
	}
	return res;
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
		for(auto &x:a) cin>>x;
		ll hx=Sum(a,n);
		ll gx=Gcd(a,n);
		ll result=Pow(hx,gx);
		cout<<result<<endl;
	}
}