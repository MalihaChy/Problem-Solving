#include<bits/stdc++.h>
using namespace std;

vector<int>v[110];
int ar[110];
bool isVisited[110];
vector<int>ans;

void DFS(int s)
{
    ans.push_back(s);
    isVisited[s]=true;
    int sz=v[s].size();
    for(int i=0;i<sz;i++)
    {
        int x=v[s][i];
        ar[x]--;
        if(isVisited[x]==false&&ar[x]==0)DFS(x);
    }
}

int main()
{
    int n,m,x,y,z;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)return 0;
        else{
            for(int i=0;i<=n;i++)v[i].clear();
            ans.clear();
            memset(ar,0,sizeof(ar));
            memset(isVisited,false,sizeof(isVisited));
            for(int i=0; i<m; i++)
            {
                cin>>x>>y;
                v[x].push_back(y);
                ar[y]++;
            }

            for(int i=1;i<=n;i++)
            {
                if(isVisited[i]==false&&ar[i]==0)DFS(i);
            }
            cout<<ans[0];
            for(int i=1;i<n;i++)cout<<" "<<ans[i];
            cout<<"\n";
        }
    }
}

