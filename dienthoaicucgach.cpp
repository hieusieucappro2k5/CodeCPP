#include<bits/stdc++.h>

using namespace std;

bool thuannghich(string n)
{
	int l=n.size();
	for(int i=0,j=l-1;i<j;i++,j--)
		if(n[i]!=n[j]) return 0;
	return 1;	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int l=n.size();
		for(int i=0;i<l;i++) n[i]=tolower(n[i]);
		for(int i=0;i<l;i++)
		{
			if(n[i]=='a'||n[i]=='b'||n[i]=='c') n[i]='2';
			if(n[i]=='d'||n[i]=='e'||n[i]=='f')	n[i]='3';
			if(n[i]=='g'||n[i]=='h'||n[i]=='i')	n[i]='4';
			if(n[i]=='j'||n[i]=='k'||n[i]=='l')	n[i]='5';
			if(n[i]=='m'||n[i]=='n'||n[i]=='o')	n[i]='6';
			if(n[i]=='p'||n[i]=='q'||n[i]=='r'||n[i]=='s')	n[i]='7';
			if(n[i]=='t'||n[i]=='u'||n[i]=='v')	n[i]='8';
			if(n[i]=='w'||n[i]=='x'||n[i]=='y'||n[i]=='z') n[i]='9';
		}
		if(thuannghich(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}