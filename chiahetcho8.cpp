#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll=long long;
const int MOD=1e9+7;

bool chiacho3(string n)
{
	int l=n.size();
	int sum=0;
	for(int i=0;i<l;i++)
		sum+=n[i]-'0';
	if(sum%3) return 1;
	return 0;
}

int main()
{
	faster
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size();
		int cnt=0;
		for(int i=0;i<l;i++)
			if(s[i]=='8') cnt++;	
		for(int i=l-4;i>=0;i--)
		{
			int r=i+3;
			int tmp=0;
			for(int j=i;j<=r;j++)
				tmp+=s[j]-'0';
			if(tmp%8==0)
				cnt+=i+1;	
		}
		cout<<cnt<<endl;
	}
	return 0;
}