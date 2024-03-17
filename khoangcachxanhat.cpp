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
		int res=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=n-1;j>=i;j--)
			{
				if(j-i<=res) 
					break; 
				if(a[i]<=a[j])
					res=max(res,j-i);
			}
		}
		cout<<res<<endl;
	}	
}