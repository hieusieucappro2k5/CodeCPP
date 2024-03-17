#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
	faster 
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int d=0,cnt=0;
		for(auto &x:a)
		{
			cin>>x;
			if(x<=k) d++;
		}
		for(int i=0;i<d;i++)
		{
			if(a[i]<=k) cnt++;
		}
		int res=cnt;
		for(int i=0,j=d;j<n;i++,j++)
		{
			if(a[i]<=k) cnt--;
			if(a[j]<=k) cnt++;
			res=max(res,cnt);
		}
		cout<<d-res<<endl;
	}
}