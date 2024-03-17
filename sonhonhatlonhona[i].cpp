#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int b_sreach(vector<int> a,int k,int n)
{	
	int l=0 ,r=n-1;
	while(l<=r)
	{
		int tmp=(l+r)/2;
		if(a[tmp]==k)
			return tmp;
		else if(a[tmp]<k)
			l=tmp+1;
		else     
			r=tmp-1;	
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		set<int> st;
		int Max=-1e9;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			Max=max(a[i],Max);
			st.insert(a[i]);
		}	
		for(int i=0;i<n;i++)
		{
			auto it=st.find(a[i]);
			if(*it==Max)
				cout<<"_ ";
			else
			{
				it++;
				cout<<*it<<" ";
			}
		}
//		for(auto x:st)
			
		cout<<endl;
	}
	return 0;
}