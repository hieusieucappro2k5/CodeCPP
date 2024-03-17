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
		int result=a[1]-a[0];
		for(int i=0;i<n-1;i++)
			result=min(result,a[i+1]-a[i]);
		cout<<result<<endl;	
	}
}