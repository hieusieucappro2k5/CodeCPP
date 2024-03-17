#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) 
	{
		int n;
		cin>>n;
		int a[n];
		for(auto &x:a) cin>>x;
		int tmp=0;
		for(int i=0; i<n; i++) tmp=max(tmp,a[i]);
		int k=1;
		for(int i=1; i<=tmp; i++) 
		{
			int ok=1;
			for(int j=0; j<n; j++) 
			{
				if(i==a[j]) 
				{
					ok=0;
					break;
				}
			}
			if(ok) 
			{
				k=0;
				cout<<i<<endl;
				break;
			}
		}
		if(k) cout<<tmp+1<<endl;
	}
}