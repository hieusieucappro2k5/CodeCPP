#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int l=n.length();
		for(int i=0;i<l;i++)
		{
			int cnt=1;
			for(int j=i+1;j<l;j++)
			{
				if(n[i]!=n[j])
					break;
				else 
				{
					cnt++;
					i++;
				}
			}
			cout<<n[i]<<cnt;
		}
		cout<<endl;
	}
}