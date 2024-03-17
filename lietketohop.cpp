#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int a[21],ok,n,k;

void ktao()
{
	for(int i=1;i<=k;i++)
		a[i-1]=i;
}

void sinh()
{
	int i=k-1;
	while(i>=0&&a[i]==n-k+i+1)
		i--;
	if(i<0)
		ok=0;
	else
	{
		a[i]++;
		for(int j=i+1;j<n;j++)
			a[j]=a[j-1]+1;
	}
		
}

void print()
{
	for(int i=0;i<k;i++)
		cout<<a[i];
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ok=1;
		ktao();
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