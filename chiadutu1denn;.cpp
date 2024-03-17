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
		ll sum=0;
		for(int i=1;i<=n;i++)
		{
			int tmp=i%k;
			sum+=tmp;
		}
		cout<<sum<<endl;
	}
}