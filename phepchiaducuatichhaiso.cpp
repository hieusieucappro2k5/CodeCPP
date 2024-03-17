#include<bits/stdc++.h>
#define endl "\n";
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
using db=double;
const int MOD=1e9+7;

ll chiadu(ll a,ll b,ll c)
{
	if(b==0)
		return 0;
	ll tmp=chiadu(a,b/2,c);
	tmp=(tmp*2)%c;
	if(b & 1)	
		tmp+=a;
	return tmp%c;		
}

int main(){
	faster
    int t;
    cin>>t;
    while(t--)
    {
    	ll a,b,c;
    	cin>>a>>b>>c;
    	ll res=chiadu(a,b,c);
    	cout<<res<<endl;
	}
    return 0;
}