#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,a,b,cnt=0;
		cin>>n>>m>>a>>b;
		for(int i=n;i<=m;i++)
			if(i%a==0||i%b==0) cnt++;
		cout<<cnt<<endl;
	}
	return 0;
}