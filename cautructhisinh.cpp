#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct ThiSinh{
	string name;
	string dateofbirth;
	double score1;
	double score2;
	double score3;
};

void nhap(ThiSinh &a){
	getline(cin,a.name);
	cin>>a.dateofbirth;
	cin>>a.score1;
	cin>>a.score2;
	cin>>a.score3;
}

void in(ThiSinh A)
{
	double score=A.score1+A.score2+A.score3;
	cout<<A.name<<" "<<A.dateofbirth<<" "<<fixed<<setprecision(1)<<score;
}

int main(){
	faster
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}