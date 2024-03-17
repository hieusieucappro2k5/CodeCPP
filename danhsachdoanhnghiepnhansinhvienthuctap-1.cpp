#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

class doanhnghiep{
	private:
		string ma,ten;
		int sosv;
	public:
		friend istream& operator >> (istream &fin,doanhnghiep &a)
		{
			fin>>a.ma;
			fin.ignore();
			getline(fin,a.ten);
			fin>>a.sosv;
			return fin;
		}
		friend ostream& operator << (ostream &fout,doanhnghiep a)
		{
			cout<<a.ma<<" "<<a.ten<<" "<<a.sosv<<endl;
			return fout;
		}
		int getsosv()
		{
			return this->sosv;
		}
		string getma(){
			return this->ma;
		}
};

bool cmp(doanhnghiep a,doanhnghiep b)
{
	if(a.getsosv()==b.getsosv())	
		return a.getma()<b.getma();
	return a.getsosv()>b.getsosv();
}

int main(){
	faster
//	freopen("DATA.txt","r",stdin);
    int n;
    cin>>n;
    doanhnghiep a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i];	
    return 0;
}