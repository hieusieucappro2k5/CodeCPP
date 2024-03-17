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
		int res=0;
		for(auto &x:a) cin>>x;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				res=max(res,a[j]-a[i]);
		if(res==0) res=-1;
		cout<<res<<endl;		
	}
}