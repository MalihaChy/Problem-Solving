#include<bits/stdc++.h>
using namespace std;

vector<int>fx,fy;
int m,n;

void BFS(int sx,int sy)
{
    bool vis[n][m];
    int cost[n][m];
    vis[sx][sy]=true;
    queue<int>qx,qy;
    qx.push(sx);
    qy.push(sy);
    while(!qx.empty())
    {
        int vx=qx.front();
        int vy=qy.front();

        for(int k=0;k<4;k++)
        {

        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        char ar[n][m];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>ar[j][k];
                if(ar[j][k]=='F'){
                    fx.push_back(j);
                    fy.push_back(k);
                }
            }
        }
        int sz=fx.size();
        for(int j=0;j<sz;j++){
            BFS(fx[j],fy[j]);
        }
    }
}
