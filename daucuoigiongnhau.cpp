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
		int l=n.size();
		int cnt=l;
		for(int i=0;i<l-1;i++)
		{
			for(int j=i+1;j<l;j++)
			{
				if(n[i]==n[j]) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}