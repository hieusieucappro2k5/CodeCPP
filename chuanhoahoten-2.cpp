#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c;
		string n,tmp;
		cin>>c;
		cin.ignore();
		getline(cin,n);
		stringstream ss(n);
		vector<string> v;
		int cnt=0;
		while(ss>>tmp)
		{
			cnt++;
			int l=tmp.length();
			tmp[0]=toupper(tmp[0]);
			for(int i=1;i<l;i++) 
				tmp[i]=tolower(tmp[i]);
			v.push_back(tmp);
		}
		if(c==1)
		{
			cout<<v[cnt-1]<<" ";
			for(int i=0;i<cnt-1;i++)
				cout<<v[i]<<" ";
		}
		else 
		{
			for(int i=1;i<cnt;i++)
				cout<<v[i]<<" ";
			cout<<v[0]<<" ";	
		}
		cout<<endl;
	}
}