#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,flag=-1;
		cin>>n>>k;
		int a[n];
		for(auto &x:a) cin>>x;
		int l=0,r=n-1;
		while(l<=r)
		{
			int tmp=(l+r)/2;
			if(a[tmp]==k)
			{
				flag=1;
				break;
			}
			if(a[tmp]<k)
				l=tmp+1;
			else
				r=tmp-1;
		}
		cout<<flag<<endl;
	}
}