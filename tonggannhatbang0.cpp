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
		int Min=1e9,res=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i]+a[j])<abs(Min))
				{
					Min=a[i]+a[j];	
				}	
			}
		}
		cout<<Min<<endl;
	}
}