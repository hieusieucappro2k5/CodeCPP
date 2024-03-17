#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++) cin>>a[i][j];
		int h1=0,h2=n-1,c1=0,c2=m-1;
		int result[n*m];
		int num=0;
		while(h1<=h2&&c1<=c2)
		{
			for(int i=c1;i<=c2;i++)
				if(num<n*m)
					result[num++]=a[h1][i];
			h1++;
			for(int i=h1;i<=h2;i++)
				if(num<n*m)
					result[num++]=a[i][c2];
			c2--;
			for(int i=c2;i>=c1;i--)
				if(num<n*m)
					result[num++]=a[h2][i];
			h2--;
			for(int i=h2;i>=h1;i--)
				if(num<n*m)
					result[num++]=a[i][c1];
			c1++;		
		}
		for(int i=0;i<num;i++) cout<<result[i]<<" ";
		cout<<endl;
	}
}