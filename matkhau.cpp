#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[j].find(v[i])!=string::npos)
				if(i!=j) cnt++;
		}
	}
	cout<<cnt;
}