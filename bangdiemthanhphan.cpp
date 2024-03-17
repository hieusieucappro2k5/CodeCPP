#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct SinhVien
{
	string masv;
	string name,Class;
	double score1,score2,score3;
};

void nhap(SinhVien &a)
{
	cin>>a.masv;
	cin.ignore();
	getline(cin,a.name);
	cin>>a.Class>>a.score1>>a.score2>>a.score3;
}

bool cmp(SinhVien a,SinhVien b)
{
	return a.masv<b.masv;
}

void sap_xep(SinhVien *ds,int n)
{
	sort(ds,ds+n,cmp);
}

void in_ds(SinhVien *ds,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" ";
		cout<<ds[i].masv<<" "<<ds[i].name<<" "<<ds[i].Class<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].score1<<" "<<ds[i].score2<<" "<<ds[i].score3;
		cout<<endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}