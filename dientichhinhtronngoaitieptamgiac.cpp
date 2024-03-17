#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PI 3.141592653589793238

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

struct point{
	double x,y;
};

double dodai (point a,point b)
{
	db l=a.x-b.x;
	db r=a.y-b.y;
	return sqrt(l*l+r*r);
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		point b,c,d;
		cin>>d.x>>d.y;
		cin>>b.x>>b.y;
		cin>>c.x>>c.y;
		db a[3];
		
		a[0]=dodai(d,b);
		a[1]=dodai(b,c);
		a[2]=dodai(d,c);
		sort(a,a+3);
		int ok=1;
		if(a[0]+a[1]<=a[2]||a[0]*a[1]*a[2]==0)
			ok=0;
		db p=(a[0]+a[1]+a[2])/2;	
		db S=sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
		db R=(a[0]*a[1]*a[2])/(4*S);
		db s=R*R*PI;
		if(ok)
			cout<<fixed<<setprecision(3)<<s<<endl;
		else cout<<"INVALID\n";	
	}
	return 0;
}