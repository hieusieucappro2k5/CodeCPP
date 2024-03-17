#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct NhanVien{
	string name,gender,date,add,ID,date1;
};

void nhap(NhanVien &x)
{
	getline(cin, x.name);
    getline(cin, x.gender);
    getline(cin, x.date);
    getline(cin, x.add);
    getline(cin, x.ID);
    getline(cin, x.date1);
}

void in(NhanVien a)
{
	cout<<"00001 "<<a.name<<" "<<a.gender<<" "<<a.date<<" "<<a.add<<" "<<a.ID<<" "<<a.date1;
}

int main(){
	faster
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}