#include<bits/stdc++.h>
using namespace std;

#define ll long long
int par[110];
int x,y,z;

struct edge{
    int x,y,z;
};

vector<edge>v;

bool cmp(edge a,edge b){
    return a.z<b.z;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)par[i]=i;

        edge get;
        while(m--)
        {
            cin>>x>>y>>z;
            get.x=x;
            get.y=y;
            get.z=z;
            v.push_back(get);
        }
        sort(v.begin(),v.end,cmp);
        Kruskal(1);
    }
}
