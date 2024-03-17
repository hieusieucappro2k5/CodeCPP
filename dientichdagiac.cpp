#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct point{
	int x,y;
};

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		point a[n+1];
		for(int i=0;i<n;i++)
			cin>>a[i].x>>a[i].y;
		a[n]=a[0];
		double tmp1=0,tmp2=0;
		for(int i=0;i<n;i++)
			tmp1+=a[i].x*a[i+1].y;
		for(int i=0;i<n;i++)
			tmp2+=a[i].y*a[i+1].x;
		double res=(tmp1-tmp2)/2;
		cout<<fixed<<setprecision(3)<<res<<endl;	
	}
	return 0;
}