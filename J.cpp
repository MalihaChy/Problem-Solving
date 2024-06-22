#include<bits/stdc++.h>
using namespace std;

vector<int>v[100010];
bool isVisited[100010];

void DFS(int s)
{
    isVisited[s]=true;
    int sz=v[s].size();
    for(int i=0;i<sz;i++)
    {
        int x=v[s][i];
        if(isVisited[x]==false)DFS(x);
    }
}

int main()
{
    int t,n,m,x,y;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<100010;i++)v[i].clear();
        memset(isVisited,false,sizeof(isVisited));
        cin>>n>>m;
        int ar[n+1];
        memset(ar,0,sizeof(ar));
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            ar[y]++;
        }
        int ans=0,s=0;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]==0){
                ans=1;
                DFS(i);
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(isVisited[i]==false){
                ans++;
                DFS(i);
            }
            /*if(v[i].size()==0){
                ans++;
            }*/
            //if(ar[i]==0){
            //    ans++;
            //}
        }
        cout<<ans<<endl;
    }
}
