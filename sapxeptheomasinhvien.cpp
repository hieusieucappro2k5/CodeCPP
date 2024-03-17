#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

class SinhVien{
	private:
		string masv,name,Class,email;
	public:
		friend istream& operator >> (istream &fin,SinhVien &a)
		{
			fin>>a.masv;
			fin.ignore();
			getline(fin,a.name);
			fin>>a.Class>>a.email;
			return fin;
		}	
		string getClass()
		{
			return this->Class;
		}
		string getmasv()
		{
			return this->masv;
		}
		friend ostream& operator << (ostream &fout,SinhVien a)
		{
			fout<<a.masv<<" "<<a.name<<" "<<a.Class<<" "<<a.email<<endl;
			return fout;
		}
};

bool cmp(SinhVien a,SinhVien b)
{
	return a.getmasv()<b.getmasv();
}


int main(){
	faster
//	freopen("DATA.txt","r", stdin);
	SinhVien a[1000];
	SinhVien b;
	int num=0;
	while(cin>>b)
	{
		a[num++]=b;
	}
	sort(a,a+num,cmp);
	for(int i=0;i<num;i++)
		cout<<a[i];
    return 0;
}