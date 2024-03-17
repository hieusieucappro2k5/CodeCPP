#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main() {
	int t;
	cin>>t;
	while(t--) 
	{
		ll n;
		cin>>n;
		int a[100]={0};
		int num=0;
		for(ll i=2; i<=sqrt(n); i++) 
		{
			if(n%i==0) 
			{
				while(n%i==0) 
				{
					a[num++]=i;
					n/=i;
				}

			}
		}
		if(n>1) a[num++]=n;
		sort(a,a+num);
		cout<<a[num-1];
		cout<<endl;
	}
}