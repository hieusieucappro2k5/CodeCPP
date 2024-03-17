#include<bits/stdc++.h>
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

using namespace std;
using ll=long long;

class Point
{
	private:
		double x,y;
	public:
		Point(double x,double y)
		{
			this->x=x;
			this->y=y;
		}
		double kc(Point B)
		{
			double l=x-B.x;
			double r=y-B.y;
			return sqrt(l*l+r*r);
		}
};

int main()
{
	faster();
	int t;
	cin>>t;
	while(t--)
	{
		double x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		Point A(x1,y1);
		Point B(x2,y2);
		double result=A.kc(B);
		cout<<fixed<<setprecision(4)<<result<<endl;
	}
}
 
