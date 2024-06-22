#include<bits/stdc++.h>
using namespace std;

vector<int>v,G[100005];
bool visited[100005];

void DFS(int s)
{
    visited[s]=true;
    v.push_back(s);
    for(int i=0; i<G[s].size(); i++)
    {
        int x=G[s][i];
        if(visited[x]==false)
        {
            DFS(x);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        sort(G[i].begin(),G[i].end());
    }
    DFS(1);
    cout<<1;
    for(int i=1;i<n;i++)
        cout<<" "<<v[i];
    cout<<endl;
}


