#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010];
vector<int>ar;
bool isVisited[10010];
int ans;

void DFS(int s)
{
    isVisited[s]=true;
    ans++;
    int sz=v[s].size();
    for(int i=0;i<sz;i++)
    {
        int x=v[s][i];
        if(isVisited[x]==false)DFS(x);

    }
}

int main()
{
    int t,n,m,l,x,y;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<10010;i++)v[i].clear();
        ar.clear();
        memset(isVisited,false,sizeof(isVisited));
        cin>>n>>m>>l;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(int i=0;i<l;i++){
            cin>>x;
            ar.push_back(x);
        }
        ans=0;

        for(int i=0;i<l;i++)
        {
            if(isVisited[ar[i]]==false)DFS(ar[i]);
        }
        cout<<ans<<endl;
    }
}
