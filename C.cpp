#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,e,x,y,z;
    while(1)
    {
        cin>>n>>e;
        if(n==0&&e==0)break;
        vector< pair<ll,ll> >v[n];
        bool isVisited[n];
        ll total_cost=0;
        memset(isVisited,false,sizeof(isVisited));
        for(ll i=0; i<e; i++)
        {
            cin>>x>>y>>z;
            total_cost+=z;
            v[x].push_back(make_pair(-z,y));
            v[y].push_back(make_pair(-z,x));
        }
        ll ans=0;
        priority_queue< pair<ll,ll> >pq;
        pq.push(make_pair(0,0));
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
        cout<<total_cost-ans<<endl;
    }
}

