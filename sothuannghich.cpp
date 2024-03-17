#include<bits/stdc++.h>

using namespace std;

bool sothuannghich(string n)
{
	int l=n.length()-1;
	for(int i=0,j=l;i<j;i++,j--) if(n[i]!=n[j]) return false;
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		if(sothuannghich(n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}