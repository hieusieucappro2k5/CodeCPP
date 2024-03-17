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
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int res[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				res[i][j]=a[i][j];
			} 
		int h1=0,h2=n-1,c1=0,c2=m-1;
		while(h1<h2&&c1<c2)
		{
			int pre=a[h1+1][c1];
			for(int i=c1;i<=c2;i++)
			{
				int cur=a[h1][i];
				res[h1][i]=pre;
				pre=cur;
			}
			h1++;
			for(int i=h1;i<=h2;i++)
			{
				int cur=a[i][c2];
				res[i][c2]=pre;
				pre=cur;
			}
			c2--;
			if(h1<=h2)
			{
				for(int i=c2;i>=c1;i--)
				{
					int cur=a[h2][i];
					res[h2][i]=pre;
					pre=cur;
				}
				h2--;
			}
			if(c1<=c2)
			{
				for(int i=h2;i>=h1;i--)
				{
					int cur=a[i][c1];
					res[i][c1]=pre;
					pre=cur;
				}
				c1++;
			}
		}		
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cout<<res[i][j]<<" ";	
		cout<<endl;
	}
	return 0;
}