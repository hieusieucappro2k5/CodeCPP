#include<bits/stdc++.h>

using namespace std;
using ll=long long;

void fb(ll fibo[])
{
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll result[10000];
		fb(result);
		cout<<result[n]<<endl;
	}
}