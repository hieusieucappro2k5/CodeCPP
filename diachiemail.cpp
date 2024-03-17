#include<bits/stdc++.h>

using namespace std;

int main()
{
	string n,tmp;
	getline(cin,n);
	vector<string> vc;
	stringstream ss(n);
	int num=0;
	while(ss>>tmp)
	{
		int k=tmp.size();
		for(int i=0;i<k;i++) tmp[i]=tolower(tmp[i]);
		vc.push_back(tmp);
		num++;
	}
	cout<<*vc.rbegin();
	for(int i=0;i<num-1;i++)
	{
		cout<<vc[i][0];
	}
	cout<<"@ptit.edu.vn";
}