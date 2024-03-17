#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string n;
		getline(cin,n);
		stringstream ss(n);
		string tmp;
		int cnt=0;
		while(ss>>tmp)
		{
			cnt++;
		}
		cout<<cnt<<endl;
	}
}