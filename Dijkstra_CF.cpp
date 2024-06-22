#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,m;
ll x,y,z;
vector< pair<ll,ll> >v[100010];
ll d[100010];
ll par[100010];
priority_queue< pair<ll,ll> >pq;
stack<ll>st;

void path(ll p)
{
    st.push(p);
    if(par[p]!=p)
        path(par[p]);
}

void Dijkstra()
{
    for(ll i=0; i<10010; i++)
    {
        d[i]=100000000017;
        par[i]=i;
    }
    d[1]=0;
    pq.push(make_pair(0,1));
    while(!pq.empty())
    {
        pair<ll,ll>a;
        a=pq.top();
        pq.pop();
        ll node=a.second;
        ll sz=v[node].size();
        for(ll i=0; i<sz; i++)
        {
            ll u=v[node][i].second;
            ll c=v[node][i].first;
            if(d[u]>d[node]+c)
            {
                d[u]=d[node]+c;
                par[u]=node;
                pq.push(make_pair(-d[u],u));
            }
        }
    }
    path(n);
    //if(st.top()!=1)
    if(d[n]==100000000017)
        cout<<-1<<endl;
    else
    {
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }

}

int main()
{
    scanf("%lld%lld",&n,&m);
    for(ll i=1; i<=m; i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        //if(x!=y)
        {
            v[x].push_back(make_pair(z,y));
            v[y].push_back(make_pair(z,x));
        }
    }
    Dijkstra();
}
