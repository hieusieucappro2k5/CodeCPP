#include<bits/stdc++.h>

using namespace std;

char nguyenam[6]={'a','e','i','o','u','y'};

int main()
{
	string n;
	cin>>n;
	int l=n.size();
	vector<char> vc;
	for(int i=0;i<l;i++) 	
		n[i]=tolower(n[i]);
	for(int i=0;i<l;i++)
	{
		int ok=1;
		for(int j=0;j<6;j++)
		{
			if(n[i]==nguyenam[j]) 	
				ok=0;
		}
		if(ok) vc.push_back(n[i]);
	}
	int k=vc.size();
	for(int i=0;i<k;i++)
	{
		cout<<"."<<vc[i];
	}
	return 0;
}