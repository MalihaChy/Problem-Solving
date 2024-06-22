#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> G[100],int s)
{
    queue<int>q;
    int level[20],parent[20];
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    q.push(s);
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        //cout<<u<<" ";
        q.pop();
        for(int i=0;i<G[u].size();i++){
            if(level[G[u][i]]==-1){
                level[G[u][i]]=level[u]+1;
                parent[G[u][i]]=u;
                q.push(G[u][i]);
            }
        }
    }
    for(int i=1;i<=8;i++)
        cout<<parent[i]<<endl;

}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>G[n+1];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
  /*  for(int i=1;i<n+1;i++){
        for(int j=0;j<u[i].size();j++)
            cout<<u[i][j]<<" ";
        cout<<endl;
    }   */

    BFS(G,1);
}


/*  input
10 13
1 2
1 3
1 4
2 6
3 7
3 8
4 7
5 8
5 10
6 10
7 8
7 9
9 10   */
