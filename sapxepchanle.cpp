#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(auto &x:a) cin>>x;
		sort(a,a+n);
		int kq[n];
		int num=0;
		for(int i=0;i<n;i+=2)
			kq[i]=a[num++];
		for(int j=1;j<n;j+=2)
			kq[j]=a[num++];	
		for(auto x:kq) cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}