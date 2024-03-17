#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,m;
		cin>>a>>m;
		int ok=1;
		for(int i=1;i<=100;i++)
		{
			if(a*i%m==1) 
			{
				ok=0;
				cout<<i<<endl;
				break;
			}
		}
		if(ok)
			cout<<"-1\n";
	}
}