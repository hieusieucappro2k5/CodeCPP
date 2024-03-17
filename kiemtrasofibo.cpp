#include<bits/stdc++.h>

using namespace std;
using ll=long long ;

void fb(ll fibo[])
{
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=96;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

bool check(ll n)
{
	ll result[100];
	fb(result);
	for(int i=0;i<=96;i++) 
		if(result[i]==n) return 1;
	return 0;	 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(check(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}