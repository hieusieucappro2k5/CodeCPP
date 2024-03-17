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
		string getmasv()
		{
			string res="";
			res=res+this->masv[3]+this->masv[4]+this->masv[5]+this->masv[6];
			return res;
		}
		char getClass()
		{
			return this->Class[0];
		}
		friend ostream& operator << (ostream &fout,SinhVien a)
		{
			fout<<a.masv<<" "<<a.name<<" "<<a.Class<<" "<<a.email<<endl;
			return fout;
		}
};

int main(){
	faster
//	freopen("DATA.txt","r", stdin);
	int n;
	cin>>n;
	SinhVien a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	cin.ignore();
	while(q--)
	{
		string nganh;
		getline(cin,nganh);
		for(int i=0;i<nganh.length();i++)
			nganh[i]=toupper(nganh[i]);
		string tmp;	
		if(nganh=="KE TOAN")
			tmp="DCKT";
		else if(nganh=="CONG NGHE THONG TIN")
			tmp="DCCN";
		else if(nganh=="AN TOAN THONG TIN")
			tmp="DCAT";
		else if(nganh=="VIEN THONG")
			tmp="DCVT";
		else if(nganh=="DIEN TU")
			tmp="DCDT";			
		cout<<"DANH SACH SINH VIEN NGANH "<<nganh<<":\n";			
		for(int i=0;i<n;i++)
		{
			if(tmp=="DCAT"||tmp=="DCCN")
			{
				if(tmp==a[i].getmasv()&&a[i].getClass()!='E')
					cout<<a[i];
			}
			else 
				if(tmp==a[i].getmasv())
					cout<<a[i];	
		}
	}
    return 0;
}