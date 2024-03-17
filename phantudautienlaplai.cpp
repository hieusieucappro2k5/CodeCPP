#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int num=0;
		int result=-1;
		int ok=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(ok)
			{
				for(int j=0;j<num;j++)
				{
					if(a[i]==b[j]) 
					{
					result=a[i];
					ok=0;
					break;
					}
				}
			}
			b[num++]=a[i];
		}
		cout<<result<<endl;
	}
}