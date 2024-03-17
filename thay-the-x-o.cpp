#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int n,m;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
char v[105][105];

void dfs(int i,int j)
{
	v[i][j]='*';
	for(int k=0;k<4;k++)
	{
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&v[i1][j1]=='O')
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
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>v[i][j];
		for(int i=0;i<n;i++)
		{
			if(v[i][0]=='O') dfs(i,0);  
			if(v[i][m-1]=='O') dfs(i,m);
		}
		for(int i=0;i<m;i++)
		{
			if(v[0][i]=='O') dfs(0,i);
			if(v[n-1][i]=='O') dfs(n-1,i);	
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if (v[i][j]!='*')
					cout<<"X ";
				else	
					cout<<"O ";	
			}
			cout<<endl;
		}	
	}
	return 0;
}