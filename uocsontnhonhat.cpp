#include<bits/stdc++.h>

using namespace std;

int ntnn(int n)
{
	int a[100];
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) 
		{
			while(n%i==0)
			{
				n/=i;
				a[cnt++]=i;
			}
		}
	}
	if(n>1) a[cnt++]=n;
	return a[0];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<"1 ";
		for(int i=2;i<=n;i++)
			cout<<ntnn(i)<<" ";\
		cout<<endl;	
	}
}