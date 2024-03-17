#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n,tmp;
		cin>>n;
		int l=n.size();
		for(int i=0;i<l;i++)
			if(n[i]>='a'&&n[i]<='z') n[i]=' ';
		stringstream ss(n);
		long long res=0;
		while(ss>>tmp)
		{
			int t=stoi(tmp);
			res+=t;
		}
		cout<<res<<endl;
	}
}