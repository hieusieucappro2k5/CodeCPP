#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int k=n.size();
		for(int i=0;i<k;i++)
		{
			int ok=1;
			for(int j=0;j<k;j++)
			{
				if(n[i]==n[j]) 
				{
					if(i==j) continue;
					else
					{
						ok=0;
						break;
					}
					
				}
			}
			if(ok) cout<<n[i];
		}
		cout<<endl;
	}
}