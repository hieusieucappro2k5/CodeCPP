#include<bits/stdc++.h>

using namespace std;

bool sodep1(int a[])
{
	for(int i=0;i<5;i++) 
		if(a[i]!=6&&a[i]!=8) return 0;
	return 1;	
}

bool sodep2(int a[])
{
	for(int i=0;i<2;i++) 
		if(a[i]!=a[i+1]) return 0;
	if(a[3]!=a[4]) return 0;
	return 1;	
}

bool sodep3(int a[])
{
	for(int i=0;i<4;i++)
		if(a[i+1]-a[i]!=1) return 0;
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int l=n.size();
		int a[5];
		int idex=0;
		for(int i=5;i<l;i++) 
		{
			if(n[i]>='0'&&n[i]<='9')
			{
				a[idex++]=n[i]-'0';
			}
		}
//		for(int i=0;i<5;i++) cout<<a[i]<<" ";
		if(sodep1(a)||sodep2(a)||sodep3(a)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}