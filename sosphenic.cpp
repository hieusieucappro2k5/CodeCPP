#include<iostream>
#include<set>
//#define faster(); 
using namespace std;

bool sphenic(long long n) {
	set<int> kq;
	for(int i=2; i*i<=n; i++) 
	{
		if(n%i==0) 
		{
			while(n%i==0) 
			{	
				if(kq.find(i)==kq.end())
					kq.insert(i);
				else return 0;
				n/=i;
			}
		}
	}
	if(n>1) kq.insert(n);
	if(kq.size()==3) return 1;
	return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		if(sphenic(n)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}