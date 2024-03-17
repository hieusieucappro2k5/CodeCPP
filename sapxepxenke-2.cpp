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
		sort(a,a+n);
		for(int i=0,j=n-1;i<=j;i++,j--)
		{
			if(i<j) cout<<a[j]<<" "<<a[i]<<" ";
			else cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}