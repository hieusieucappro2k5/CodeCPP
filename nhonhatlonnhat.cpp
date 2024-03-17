#include<bits/stdc++.h>

using namespace std;

void max(int m,int s) {
	int a[101];
	int cnt=0;
	while(m--) {
		if(s>9) {
			a[cnt++]=9;
			s-=9;
		} else {
			a[cnt++]=s;
			s=0;
//			else a[cnt++]=0;
		}

	}
	for(int i=0; i<cnt; i++)
		cout<<a[i];
}

void min(int m,int s) {
	int b[101];
	int cnt=0;
	while(m--) {
		if(s>9) 
		{
			b[cnt++]=9;
			s-=9;
		} 
		else if(m>0&&s!=1) 
		{
			b[cnt++]=s-1;
			s=1;
		}
		else if(s==1&&m>0)
		{
			b[cnt++]=0;
		}
		else b[cnt++]=s;
	}
	for(int i=cnt-1; i>=0; i--)
		cout<<b[i];
}

int main() {
	int m,s;
	cin>>m>>s;
	if(9*m<s||s<1) cout<<"-1 -1";
	else {
		min(m,s);
		cout<<" ";
		max(m,s);
	}
}