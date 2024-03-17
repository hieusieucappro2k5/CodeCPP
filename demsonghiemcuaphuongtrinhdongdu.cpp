#include<bits/stdc++.h>

using namespace std;
using ll=long long;  

bool prime(ll n)
{
	if(n<2) return 0;
	if(n<4) return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=2;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0) return 0;
	return 1;	
}

bool ntcungnhau(ll a,ll b)
{
//	ll tmp=min(a,b);
	if(__gcd(a,b)==1) return 1;
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll b,p;
		cin>>b>>p;
		int cnt=0;
		for(long long i=1;i<p;i++)
		{ 
	        if((i*i)%p==1){
	            long long k=i+p*(b/p); 
	            if(k>b) k-=p; 
	            cnt+=(k-i)/p+1; 
	        } 
	    }
		cout<<cnt<<endl;
	}
}