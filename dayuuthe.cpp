#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		int cntc=0,cntl=0,number=0;
		while(scanf("%d",&x)!=EOF)
		{
			number++;
			if(x%2) cntl++;
			else cntc++;
			char k=getchar();
			if(k=='\n') break;
		}
		if(number%2)
		{
			if(cntl>cntc) cout<<"YES\n";
			else if(cntl==cntc) cout<<"NO\n";
		
			else cout<<"NO\n";
		}  
		else	
		{
			if(cntc>cntl) cout<<"YES\n";
			else if(cntl==cntc) cout<<"NO\n";
			else cout<<"NO\n";
		}
	}
}