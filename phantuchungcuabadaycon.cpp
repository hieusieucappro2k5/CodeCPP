#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		vector<ll> v,a(n1),b(n2),c(n3);
		map<ll,ll> mp1,mp2;
		for(auto &x:a) 
			cin>>x;
		for(auto &x:b)
			cin>>x;
		for(auto &x:c)
			cin>>x;
		int l=0,r=0,m=0;
		while(l<n1&&r<n2&&m<n3)
		{
			if(a[l]==b[r]&&b[r]==c[m])
			{
				v.push_back(a[l]);
				l++;
				r++;
				m++;
			}
			else if(a[l]<b[r]) l++;
			else if(b[r]<c[m]) r++;
			else m++;
		}
		if(v.size())
		{
			for(auto x:v)
				cout<<x<<" ";
		}
		else
		{
			cout<<"-1";
		}
		cout<<endl;	
	}
}