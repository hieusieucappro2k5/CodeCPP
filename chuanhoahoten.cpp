#include<bits/stdc++.h>

using namespace std;

int main()
{
	string n,tmp;
	getline(cin,n);
	stringstream ss(n);
	vector<string> vc;
	while(ss>>tmp)
	{
		int l=tmp.size();
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<l;i++) 	
			tmp[i]=tolower(tmp[i]);
		vc.push_back(tmp);
	}
	int l=vc.size()-1;
	for(int i=0;i<l;i++) 
	{
		cout<<vc[i];
		if(i==l-1) cout<<", ";
		else cout<<" ";
	}
	for(int i=0;i<vc[l].size();i++) vc[l][i]=toupper(vc[l][i]);
	cout<<vc[l];
}