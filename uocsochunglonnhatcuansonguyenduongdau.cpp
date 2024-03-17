#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll lcm(ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll result=1;
		for(int i=n;i>=2;i--)
		{
//			if(result%i!=0)
			result=lcm(result,i);
		}
//		cout<<__gcd(6,120)<<endl;
		cout<<result<<endl;
	}
}