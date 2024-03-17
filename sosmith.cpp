#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int sumofdigit(int n)
{
	ll sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool smith(int n)
{
	int sum=0,sumD=sumofdigit(n);
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int tmp=sumofdigit(i);
			while(n%i==0)
			{
				n/=i;
				sum+=tmp;
			}
		}
	}
	if(sum==0) return 0;
	if(n>1) sum+=sumofdigit(n);
	return sum==sumD;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(smith(n)?"YES\n":"NO\n");
	}
}