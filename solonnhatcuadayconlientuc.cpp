#include<bits/stdc++.h>
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	faster();
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(auto &x:a) cin>>x;
		deque<int> dq;
		for(int i=0;i<n;i++)
		{
			while(!dq.empty()&&a[dq.back()]<=a[i])
				dq.pop_back();
			dq.push_back(i);
			while(dq.front()+k<=i)
				dq.pop_front();
			if(i>=k-1) 
				cout<<a[dq.front()]<<" ";		
		}
		cout<<endl;
	}
}