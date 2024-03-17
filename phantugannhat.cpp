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
		int n,left,right;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int k,x;
		cin>>k>>x;
		int K=lower_bound(a.begin(),a.end(),x)-a.begin();
		if(a[K]==x)
		{
			left=K-1;
			right=K+1;
		}
		else 
		{
			left=K-1;
			right=K;
		}
		for(int i=k/2-1;i>=0;i--)
		{
			cout<<a[left-i]<<" ";
		}
		for(int i=0;i<k/2;i++)
		{
			cout<<a[right+i]<<" ";
		}
		cout<<endl;
//		cout<<K<<endl;
	}
}