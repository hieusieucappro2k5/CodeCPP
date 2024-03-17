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
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(auto &x:a) cin>>x;
		sort(a,a+n);
		for(auto &x:b) cin>>x;
		sort(b,b+m);
		int l=0,r=0,i=0,j=0;
		while(l<n&&r<m)
		{
			if(a[l]<b[r])
			{
				cout<<a[l]<<" ";
				l++;
			}
			else if(a[l]>b[r])
			{
				cout<<b[r]<<" ";
				r++;
			}
			else 
			{
				cout<<a[l]<<" ";
				l++;
				r++;
			}
		}
		for(int k=r;k<m;k++) cout<<b[k]<<" ";
		for(int k=l;k<n;k++) cout<<a[k]<<" ";
		cout<<endl;
		while(i<n&&j<m)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<" ";
				j++;
				i++;
			}
			else if(a[i]>b[j]) j++;
			else if(a[i]<b[j]) i++;
		}
		cout<<endl;
	}
}