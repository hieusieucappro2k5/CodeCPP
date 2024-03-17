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
		int a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++) 
				cin>>a[i][j];
//		int tmp=0;
		for(int i=0;i<n;i++)
		{
			if(i%2)
				for(int j=n-1;j>=0;j--) 	
					cout<<a[i][j]<<" ";	
			else 
				for(int j=0;j<n;j++) 	
					cout<<a[i][j]<<" "; 
		}		
		cout<<endl;
	}
}