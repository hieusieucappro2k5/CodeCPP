#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int res=0;
		set<int> st;
		for(int i=0;i<n;i++)
			st.insert(a[0][i]);
		for(auto x:st)
		{
			int cnt=1;
			for(int j=1;j<n;j++)
			{
				for(int k=0;k<n;k++)
					if(a[j][k]==x)
					{
						cnt++;
						break;
					}	
			}	
			if(cnt==n)
				res++;	
		}
		cout<<res<<endl;
	}
	return 0;
}