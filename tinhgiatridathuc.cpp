#include<bits/stdc++.h>

using namespace std;
const int MOD=1e9+7;
using ll=long long;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll P[n];
		for(int i=n-1;i>=0;i--) cin>>P[i];
		ll result=0;
		ll tmp=1;
		for(int i=0;i<n;i++)
		{
			result=(result+(P[i]%MOD*tmp%MOD)%MOD)%MOD;
			tmp=(tmp%MOD*x)%MOD;
		} 
		cout<<result<<endl;
	}
	
}