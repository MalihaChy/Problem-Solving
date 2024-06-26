#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    ll cost,n,e,x,y,z;
    while(t--)
    {
        cin>>cost>>n>>e;
        vector< pair<ll,ll> >v[n+1];
        bool isVisited[n+1];
        memset(isVisited,false,sizeof(isVisited));
        for(ll i=0; i<e; i++)
        {
            cin>>x>>y>>z;
            v[x].push_back(make_pair(-z,y));
            v[y].push_back(make_pair(-z,x));
        }
        ll ans=0;
        priority_queue< pair<ll,ll> >pq;
        pq.push(make_pair(0,1));
        pair<ll,ll>p;
        ll a,b,sz;
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            a=p.second;
            if(isVisited[a]==false)
            {
                ans+=(-p.first);
                isVisited[a]=true;
                sz=v[a].size();
                for(ll i=0; i<sz; i++)
                {
                    b=v[a][i].second;
                    if(isVisited[b]==false)
                        pq.push(v[a][i]);
                }
            }
        }
        cout<<ans*cost<<endl;
    }
}
