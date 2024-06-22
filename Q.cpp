#include<bits/stdc++.h>
using namespace std;

struct edge{
    int source;
    int des;
    int cost;
} e;

vector<edge>v;
vector<int>in_mst;

bool cmp(edge a, edge b)
{
    return a.cost<b.cost;
}

int m,n;

int par[200];

int Find(int x)
{
    if(par[x]==x)return x;
    else{
        par[x]=Find(par[x]);
        return par[x];
    }
}

void Union(int x,int y)
{
    int px=Find(x);
    int py=Find(y);
    par[px]=py;
}

int Kruskal()
{
    int no_of_edges=0,x,y;
    for(int i=0;i<m;i++)
    {
        x=v[i].source;
        y=v[i].des;
        if(Find(x)!=Find(y)){
            no_of_edges++;
            in_mst.push_back(i);
            //cout<<i<<endl;
            Union(x,y);
        }
    }
    return no_of_edges;
}

int Kruskal_2(int j)
{
    int x,y,z,no_of_edges=0,mst=0;
    for(int i=0;i<m;i++)
    {
        if(i!=j)
        {
            x=v[i].source;
            y=v[i].des;
            z=v[i].cost;
            if(Find(x)!=Find(y))
            {
                no_of_edges++;
                Union(x,y);
                mst+=z;
            }
        }
    }
    if(no_of_edges==n-1)return mst;
    else return INT_MAX;
}

int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        v.clear();
        in_mst.clear();
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            e.source=x;
            e.des=y;
            e.cost=z;
            v.push_back(e);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<200;i++)par[i]=i;
        if(n-1!=Kruskal())printf("Case #%d : No way\n",tc);
        else{
            vector<int>second_mst;
            int sz=in_mst.size();
            for(int i=0;i<sz;i++)
            {
                for(int j=0;j<200;j++)par[j]=j;
                //cout<<in_mst[i]<<endl;
                int c=Kruskal_2(in_mst[i]);
                if(c!=INT_MAX)second_mst.push_back(c);
            }
            if(second_mst.size()==0)printf("Case #%d : No second way\n",tc);
            else{
                sort(second_mst.begin(),second_mst.end());
                printf("Case #%d : %d\n",tc,second_mst[0]);
                //for(int i=0;i<second_mst.size();i++)
                    //cout<<second_mst[i]<<endl;
            }

        }

    }
}
