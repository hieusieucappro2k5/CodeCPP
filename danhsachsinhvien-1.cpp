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

void nhap(SinhVien *a,int n)
{
	for(int i=0;i<n;i++)
	{	
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].Class>>a[i].date>>a[i].gpa;
//		cin.ignore();	
	}
	
}

void in(SinhVien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].date[1]=='/') a[i].date.insert(0,1,'0');
		if(a[i].date[4]=='/') a[i].date.insert(3,1,'0');
		string id,tmp=to_string(i+1);
		if(i+1>=10) id="0"+tmp;
		else id="00"+tmp;
		cout<<"B20DCCN"<<id<<" "<<a[i].name<<" "<<a[i].Class<<" "<<a[i].date<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
	}
	
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}