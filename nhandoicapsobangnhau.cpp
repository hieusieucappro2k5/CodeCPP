#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(auto &x:a) cin>>x;
		int res[n]={0};
		int num=0;
		for(int i=0;i<n;i++)
		{
			int k=a[i];
			if(a[i]==a[i+1])
			{
				k=a[i]*2;	
				i++;
			}		
			if(k)
			{
				res[num++]=k;
			}
		}
		for(auto x:res)
				cout<<x<<" ";	
		cout<<endl;
	}
}