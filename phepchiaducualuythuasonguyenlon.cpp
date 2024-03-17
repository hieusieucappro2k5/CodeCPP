#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define "\n"; endl; 
using namespace std;
using ll=long long ;

ll chiadu(string a,ll M)
{
	ll tmp=0;
	ll n=a.size();
	for(int i=0;i<n;i++)
	{
		tmp=tmp*10+a[i]-'0';
		tmp%=M;
	}
	return tmp;
}

ll powM(ll a,ll b,ll M)
{
	ll res=1;
	while(b)
	{
		if(b%2)
		{
			res*=a;
			res%=M;
		}
		a*=a;
		a%=M;
		b/=2;
	}
	return res;
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		ll b,M;
		cin>>a>>b>>M;
		ll res=chiadu(a,M);
		cout<<powM(res,b,M)<<endl;
	}
}