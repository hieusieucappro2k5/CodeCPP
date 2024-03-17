#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

string xuly(string s)
{
	string tmp,res="";
	stringstream ss(s);
	while(ss>>tmp)
	{
		tmp[0]=toupper(tmp[0]);
		res+=tmp[0];
	}
	return res;
}

class giangvien{
	private:
		string name,mon,magv;
		static int dem;
	public:
		friend istream& operator >>(istream &fin,giangvien &a)
		{
			getline(fin,a.name);
			string tmp;
			getline(fin,tmp);
			a.mon=xuly(tmp);
			dem++;
			string res="",tmp1;
			res="GV"+tmp1.insert(0,2-to_string(dem).length(),'0')+to_string(dem);
			a.magv=res;
			return fin;
		}
		friend ostream& operator << (ostream &fout,giangvien a)
		{
			fout<<a.magv<<" "<<a.name<<" "<<a.mon<<endl;
			return fout;
		}
		string getmon()
		{
			return this->mon;
		}
};

int giangvien::dem=0;

int main(){
	faster
//	freopen("DATA.txt","r",stdin);
    int n;
    cin>>n;
	cin.ignore();
    giangvien a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int q;
    cin>>q;
    cin.ignore();
    while(q--)
    {
    	string s;
    	getline(cin,s);
    	s=xuly(s);
    	cout<<"DANH SACH GIANG VIEN BO MON "<<s<<":\n";
    	for(int i=0;i<n;i++)
    		if(a[i].getmon()==s)
    			cout<<a[i];		
	}
    return 0;
}