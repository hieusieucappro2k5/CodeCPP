#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(auto &x:a) cin>>x;
		int flag=-1;
		for(int i=0;i<n-2;i++)
		{
			int k=i+2;
			for(int j=1;j<n-1;j++)
			{
				//while(//)
			#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

ll sqr(ll a,ll b)
{
	ll k=a+b;
	ll tmp=sqrt(k);
	if(tmp*tmp==k)
		return 1;
	return 0;
}

int main()
{
    faster;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			a[i]=x*x;
		}
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n-2;i++)
		{
            int left = i + 1;
            int right = n - 1;
			while (left < right) {
				if (sqr(a[i], a[left]) && a[i] + a[left] == a[right]) {
					ok = 1;
					break;
				} else if (a[i] + a[left] < a[right]) {
					right--;
				} else {
					left++;
				}
			}
			if (ok) break;	
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

ll sqr(ll a,ll b)
{
	ll k=a+b;
	ll tmp=sqrt(k);
	if(tmp*tmp==k)
		return 1;
	return 0;
}

int main()
{
    faster;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			a[i]=x*x;
		}
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n-2;i++)
		{
            int left = i + 1;
            int right = n - 1;
			while (left < right) {
				if (sqr(a[i], a[left]) && a[i] + a[left] == a[right]) {
					ok = 1;
					break;
				} else if (a[i] + a[left] < a[right]) {
					right--;
				} else {
					left++;
				}
			}
			if (ok) break;	
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
	k++;
				if(a[i]+a[j]<c[k]&&a[i]*a[i]+a[j]*a[j]==a[k]*a[k])	
				{
					flag=0;
					break;
				}
			}
			
		}
		if<<(flag?"YES\n":"NO\n");
	}
	return 0;
}