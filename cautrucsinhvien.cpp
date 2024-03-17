#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct SinhVien
{
	string name,Class,date;
	double gpa;
};

void nhap(SinhVien &a)
{
	getline(cin,a.name);
	cin>>a.Class>>a.date>>a.gpa;
}

void in(SinhVien a)
{
	if(a.date[1]=='/') a.date.insert(0,1,'0');
	if(a.date[4]=='/') a.date.insert(3,1,'0');
	cout<<"B20DCCN001 "<<a.name<<" "<<a.Class<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
}

int main()
{
	faster
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}