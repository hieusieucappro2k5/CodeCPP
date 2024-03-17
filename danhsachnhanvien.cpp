#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct NhanVien{
	string name;
	string sex;
	string dateofbirth;
	string address;
	string mathue;
	string date;
};

void nhap(NhanVien &a)
{
	cin.ignore();
	getline(cin,a.name);
	cin>>a.sex;
	cin>>a.dateofbirth;
	cin.ignore();
	getline(cin,a.address);
	cin>>a.mathue;
	cin>>a.date;
}

void inds(NhanVien ds[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		string id="0000";
		string tmp=to_string(i);
		if(i>=10) id=id-'0'+tmp;
		else id+=tmp;
		cout<<id<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].dateofbirth<<" "<<ds[i].address<<" "<<ds[i].mathue<<" "<<ds[i].date;
		cout<<endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}