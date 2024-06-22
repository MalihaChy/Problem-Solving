#include<bits/stdc++.h>
using namespace std;

int n;
int ar[1000][1000];

int BFS()
{
    queue<int>q;
    int level[n+1];
    memset(level,-1,sizeof(level));
    q.push(1);
    level[1]=0;
    //cout<<"Path : ";
    while(!q.empty())
    {
        int u=q.front();
        //cout<<u<<" ";
        q.pop();
        for(int i=1;i<=n;i++){
            int x=ar[u][i];
            if(x==0&&level[i]==-1){
                level[i]=level[u]+1;
                q.push(i);
            }
        }
    }
    return level[n];
}


int main()
{
    int m,u,v;
    cin>>n>>m;
    int ar[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            ar[i][j]=-1;
    }
    for(int i=0;i<m;i++){
        cin>>u>>v;
        ar[u][v]=0;
        ar[v][u]=0;
    }
    //BFS(ar,1);
    //int x[100][100];
    //BFS(x,1);
    cout<<BFS()<<endl;
}
