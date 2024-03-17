#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll lcm0f3(ll x,ll y,ll z,ll n)
{
	ll tmp=lcm(x,lcm(y,z));
	ll m=pow(10,n-1);
	ll res=(m+tmp-1)/tmp*tmp;
	if(res<pow(10,n))
		return res;
	return -1;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		cout<<lcm0f3(x,y,z,n)<<endl;
	}
}