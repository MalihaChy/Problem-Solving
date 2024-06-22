#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,w;
int adj[1000][1000];
bool adj2[1000][1000];
vector< pair<int,int> >sub_graph;

void Floyd_Warshell()
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            adj[i][j]=10000000;
    }
    for(int i=1; i<=n; i++)
        adj[i][i]=0;
    for(int i=1; i<=m; i++)
    {
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj2[u][v]=true;
    }
    Floyd_Warshell();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(adj[i][j]!=10000000&&adj[j][i]!=10000000&&i!=j)
                sub_graph.push_back(make_pair(i,j));
        }
    }
    int sz=sub_graph.size();
    if(sz==0)
        cout<<"Such subgraph does not exist!\n";
    else
    {
        int x,y;
        cout<<"The subgraph: \n";
        for(int i=0; i<sz; i++)
        {
            x=sub_graph[i].first;
            y=sub_graph[i].second;
            if(adj2[x][y]==true)
                cout<<x<<" "<<y<<" "<<adj[x][y]<<endl;
        }
    }
}
