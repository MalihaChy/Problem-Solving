#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector< pair<int,int> >v[n+1];
    int x,y,z;
    for(int i=0; i<e; i++)
    {
        cin>>x>>y>>z;
        v[x].push_back(make_pair(-z,y));
        v[y].push_back(make_pair(-z,x));
    }
    bool isVisited[n+1];
    memset(isVisited,false,sizeof(isVisited));
    priority_queue< pair<int,int> >pq;
    pq.push(make_pair(0,1));
    int ans=0;
    pair<int,int>p;
    while(!pq.empty())
    {
        p=pq.top();
        pq.pop();
        int a=p.second;
        if(isVisited[a]==false)
        {
            ans+=(-p.first);
            isVisited[a]=true;
            int sz=v[a].size();
            for(int i=0; i<sz; i++)
            {
                int b=v[a][i].second;
                if(isVisited[b]==false)
                    pq.push(v[a][i]);
            }
        }
    }
    cout<<ans<<endl;
}
