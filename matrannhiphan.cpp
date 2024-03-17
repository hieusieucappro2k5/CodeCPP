#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n][3];
	int kq=0;
	for(int i=0;i<n;i++)
	{	
		int cnt1=0,cnt0=0;
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1) cnt1++;
			else cnt0++;
		}
		if(cnt1>cnt0) kq++;
	}
	cout<<kq;
}