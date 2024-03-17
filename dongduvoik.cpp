#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
 	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int cnt=0;
		for(auto &x:a)
			cin>>x;
		sort(a,a+n);
		int x=a[n-1]-a[0];
		for(int i=1;i<=x;i++)
		{
			int ok=1;
			for(int j=1;j<n;j++) 
			{
				if((a[j]-a[0])%i!=0)			
				{
				ok=0;
				break;
				}
			}
			if(ok) cnt++;
		}	
		cout<<cnt<<endl;
	}
}