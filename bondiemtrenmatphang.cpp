#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct point{
	int x,y,z;
};

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		point a[4];
		for(int i=0;i<4;i++)
			cin>>a[i].x>>a[i].y>>a[i].z;
		int x1=a[1].x-a[0].x;
	    int y1=a[1].y-a[0].y;
	    int z1=a[1].z-a[0].z;
	    int x2=a[2].x-a[0].x;
	    int y2=a[2].y-a[0].y;
	    int z2=a[2].z-a[0].z;
	    int x0=y1*z2-y2*z1;
	    int y0=x2*z1-x1*z2;
	    int z0=x1*y2-y1*x2;
		int k=x0*(a[3].x-a[0].x)+y0*(a[3].y-a[0].y)+z0*(a[3].z-a[0].z);
		if(k==0)
			cout<<"YES\n";
		else 
			cout<<"NO\n";	
	}
	return 0;
}