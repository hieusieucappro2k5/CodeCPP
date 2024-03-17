#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool prime(ll n) 
{
	if(n<2) return 0;
	if(n<4) return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=5; i*i<=n; i+=6)
		if(n%i==0||n%(i+2)==0) return 0;
	return 1;
}

ll pow(ll n) 
{
	ll result=1;
	for(int i=1; i<=n; i++) 
		result*=2;
	return result;
}

int main() {
	int t;
	cin>>t;
	while(t--) 
	{
		long long n;
		cin>>n;
		vector<ll> kq;
		for(ll i=2; i<20; i++) 
		{
			if(prime(i)) 
			{
				ll n=pow(i)-1;
				if(prime(n)) 
				{
					ll tmp=pow(i-1)*(pow(i)-1);
					kq.push_back(tmp);
				}
			}
		}
		int ok=0;
		for(auto x:kq) 
		{
			if(n==x) 
			{
				ok=1;
				break;
			}
		}
		if(ok) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
