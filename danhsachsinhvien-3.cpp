#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

struct SinhVien
{
	string Masinhvien;
	string name,Class,date;
	double gpa;
};

void nhap(SinhVien *a,int n)
{
	for(int i=0;i<n;i++)
	{	
		cin.ignore();
		string tmp=to_string(i+1);
		if(i+1>=10) a[i].Masinhvien="B20DCCN0"+tmp;
		else a[i].Masinhvien="B20DCCN00"+tmp;
		getline(cin,a[i].name);
		cin>>a[i].Class>>a[i].date>>a[i].gpa;	
	}
	
}

bool cmp(SinhVien a,SinhVien b)
{
	return a.gpa>b.gpa;
}

void sapxep(SinhVien *a,int n)
{
	sort(a,a+n,cmp);
}

string xulyname(string a)
{
	string tmp,res;
	stringstream ss(a);
	while(ss>>tmp)
	{
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++)
			tmp[i]=tolower(tmp[i]);
		res+=tmp;	
		res+=' ';
	}
	return res;
}



void in(SinhVien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i].name=xulyname(a[i].name);
		if(a[i].date[1]=='/') a[i].date.insert(0,1,'0');
		if(a[i].date[4]=='/') a[i].date.insert(3,1,'0');
		cout<<a[i].Masinhvien<<" "<<a[i].name<<a[i].Class<<" "<<a[i].date<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
	}
	
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}