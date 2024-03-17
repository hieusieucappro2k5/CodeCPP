#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,b;
	cin>>n>>k>>b;
	int a[n]={0};
	for(int i=0;i<b;i++)
	{
		int x;
		cin>>x;
		a[x-1]=1;
	}	
	int Min=1e9;
	int sum=0;
	for(int i=0;i<k;i++) sum+=a[i];		
	for(int i=1;i<=n-k;i++)
	{
		sum=sum-a[i-1];
		Min=min(Min,sum+a[i+k-1]);
	}
	cout<<Min<<endl;
}