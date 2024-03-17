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
		int Max=0;
		while(ss>>tmp)
		{
			int cnt=stoi(tmp);
			Max=max(Max,cnt);
		}
		cout<<Max<<endl;
	}
}