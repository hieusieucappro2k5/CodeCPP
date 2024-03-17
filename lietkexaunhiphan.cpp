#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int n;
int a[21]={0},ok;

void sinh()
{
	int i=n-1;
	while(i>=0 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>=0) 
		a[i]=1;
	else
		ok=0;
}

void print()
{
	for(int i=0;i<n;i++)
		cout<<a[i];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ok=1;
		cin>>n;
		while(ok)
		{
			print();
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
	return 0;
}