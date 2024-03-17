#include<bits/stdc++.h>
#define MAXLIST 10000

using namespace std;

typedef struct {
	int n;
	int nodes[MAXLIST];
} Node;

void area()
{
	int x;
	Node list;
	map <int,int> mp;
	int id=0,num=0;
	while(scanf("%d",&x)!=EOF)
	{
		id++;
		list.nodes[num++]=x;
		mp[x]++;
	}
	list.n=id;
	for(int i=0;i<id;i++)
	{
		{
		if(mp[list.nodes[i]])
			cout<<list.nodes[i]<<" "<<mp[list.nodes[i]]<<endl;
			mp[list.nodes[i]]=0;
		}
	}
}

int main()
{
	area();
	return 0;
}