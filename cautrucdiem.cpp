#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct Point
{
     double x, y;
};

void input(Point &A)
{
	cin>>A.x;
	cin>>A.y;
}

double distance(Point A,Point B)
{
	double X=A.x-B.x;
	double Y=A.y-B.y;
	return sqrt(X*X+Y*Y);
}

int main()
{
	faster
    struct Point A, B;
    int t;
    cin>>t;
    while(t--)
	{
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
