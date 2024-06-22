#include<bits/stdc++.h>
using namespace std;

int BFS(vector<int> G[450],int n)
{
    queue<int>q;
    int level[450];
    memset(level,-1,sizeof(level));
    q.push(1);
    level[1]=0;
    //cout<<"Path : ";
    while(!q.empty())
    {
        int u=q.front();
        //cout<<u<<" ";
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int x=G[u][i];
            if(level[x]==-1){
                level[x]=level[u]+1;
                q.push(x);
            }
        }
    }
    return level[n];
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>G[n+1],K[n+1];
    int ar[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            ar[i][j]=-1;
    }
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        ar[x][y]=0;
        ar[y][x]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(ar[i][j]==-1){
                K[i].push_back(j);
                K[j].push_back(i);
            }
        }
    }
    int ans1=BFS(G,n);
    int ans2=BFS(K,n);
    if(ans1>-1&&ans2>-1)cout<<ans1+ans2<<endl;
    else cout<<-1<<endl;
    //cout<<BFS(G,n)<<endl;
    //cout<<BFS(K,n)<<endl;
}


