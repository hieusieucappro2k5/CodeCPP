#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int n,m,a[105][105];

void hinhchunhat()
{
	int tmp[n][m];
	for(int j=0;j<m;j++)
	{
		tmp[0][j]=a[0][j];
		for(int i=1;i<n;i++)
			tmp[i][j]=(a[i][j]==0)?0:tmp[i-1][j]+1;
	}	
	for(int i=0;i<n;i++)
		sort(tmp[i],tmp[i]+m);
	int res=0;		
	for(int i=0;i<n;i++)
	{
		int kq;
		for(int j=m-1;j>=0;j--)
		{
			kq=tmp[i][j]*(m-j);
			res=max(res,kq);
		}
	}			
	cout<<res<<endl;
}
int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		hinhchunhat();	
	}
	return 0;
}