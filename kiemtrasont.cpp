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

int main()
{
	int n;
	cin>>n;
	if(prime(n)) cout<<"YES\n";
	else cout<<"NO\n";
}