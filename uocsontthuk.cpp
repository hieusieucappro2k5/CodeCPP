#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,k;
		cin>>N>>k;
		int a[100];
		int cnt=0;
		for(int i=2;i*i<=N;i++)
		{
			if(N%i==0)
			{
				while(N%i==0)
				{
					a[cnt++]=i;
					N/=i;
				}
			}
		}
		if(N>1) a[cnt++]=N;
		if(cnt<k) cout<<"-1\n";
		else cout<<a[k-1]<<endl;
	}
}