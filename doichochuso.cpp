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
		int l=n.size();
		int ok=1;
		for(int i=l-1;i>0;i--)
		{
			if(n[i-1]>n[i])
			{
				int id=i;
				for(int j=i;j<l;j++)
				{
					int max=n[i];
					if(n[j]<n[i-1]&&n[j]>max)
					{
						max=n[j];
						id=j;	
					}
				}
				swap(n[i-1],n[id]);
				ok=0;
				break;
			}
		}
		if(ok) cout<<"-1\n";
		else cout<<n<<endl;
	}
}