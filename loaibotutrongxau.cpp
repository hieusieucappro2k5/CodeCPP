#include<bits/stdc++.h>

using namespace std;

int main()
{
	string S1,S2,tmp;
	getline(cin,S1);
	getline(cin,S2);
	vector<string> vt;
	stringstream ss(S1);
	while(ss>>tmp)
	{
		vt.push_back(tmp);
	}
	for(int i=0;i<vt.size();i++)
	{
		if(vt[i]!=S2) cout<<vt[i]<<" ";
	}
}