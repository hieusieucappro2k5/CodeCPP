#include<bits/stdc++.h>

using namespace std;

bool prime(int n)
{
	if(n<2) return 0;
	if(n==2||n==3) return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=5;i*i<=n;i+=2)
		if(n%i==0||n%(i+2)==0) return 0;
	return 1;	
}

bool fx(int n)
{
	int cnt=0;
	for(int i=1;i<=n;i++) 
		if(__gcd(i,n)==1) cnt++;
	if(prime(cnt)) return 1;
	return 0;		
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(fx(n)) cout<<"1\n";
		else cout<<"0\n";
	}
}