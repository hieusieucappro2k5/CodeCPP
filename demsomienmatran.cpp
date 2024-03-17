#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int n,m,a[105][105];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void dfs(int i,int j)
{
	a[i][j]=0;
	for(int k=0;k<8;k++)
	{
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(a[i1][j1]&i1>=0&&j1>=0&&i1<n&&j1<m)
			dfs(i1,j1);
	}
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int cnt=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j])
				{
					cnt++;
					dfs(i,j);
				}
		cout<<cnt<<endl;				
	}
	return 0;
}