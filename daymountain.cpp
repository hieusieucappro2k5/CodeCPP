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
		int l,r;
		cin>>l>>r;
		if(a[l]<a[l+1])
		{
			int ok=1;
			for(int i=l;i<r;i++)
			{
				if(a[i]>a[i+1])
				{
					for(int j=i;j<r;j++)
					{
						if(a[j]<a[j+1])
						{
							ok=0;
							break;
						}
					}
				}
				else if(a[i]==a[i+1])
				{
					ok=0;
					break;
				}
			}	
			if(ok) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else if(a[l]==a[l+1]) cout<<"No\n";
		else 
		{
			int ok=1;
			for(int i=l;i<r;i++)
			{
				if(a[i]<=a[i+1])
				{
					ok=0;
					break;
				}
			}
			if(ok) cout<<"Yes\n";
			else cout<<"No\n";
		}	
	}	
}