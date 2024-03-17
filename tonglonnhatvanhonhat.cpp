#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll Min(string n)
{
	int l=n.size();
	for(int i=0;i<l;i++)
	{
		if(n[i]=='6') n[i]='5';
	}
	return stoll(n);
}

ll Max(string n)
{
	int l=n.size();
	for(int i=0;i<l;i++)
	{
		if(n[i]=='5') n[i]='6';
	}
	return stoll(n);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string X1,X2;
		cin>>X1>>X2;
		ll l1=Max(X1),r1=Max(X2),l2=Min(X1),r2=Min(X2);
		cout<<l2+r2<<" "<<l1+r1<<endl;		
	}
}