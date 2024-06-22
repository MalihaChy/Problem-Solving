#include<bits/stdc++.h>
using namespace std;

int n;

void BFS(vector<int> G[100],int s)
{
    priority_queue<int>q;
    vector<int>v;
    int level[n+1];
    memset(level,-1,sizeof(level));
    q.push(-s);
    level[s]=0;
    //cout<<"Path : ";
    while(!q.empty())
    {
        int u=-q.top();
        v.push_back(u);
        //cout<<u<<" ";
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int x=G[u][i];
            if(level[x]==-1){
                level[x]=level[u]+1;
                q.push(-x);
            }
        }
    }
    cout<<1;
    for(int i=1;i<n;i++)
        cout<<" "<<v[i];
    cout<<"\n";
}

int main()
{
    int e;
    cin>>n>>e;
    vector<int>G[n+1];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    BFS(G,1);
}


