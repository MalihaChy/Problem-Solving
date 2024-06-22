#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,x,y,z;
    ll t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n;
        vector< pair<ll,ll> >v[n+1];
        bool isVisited[n+1];
        memset(isVisited,false,sizeof(isVisited));
        while(cin>>x>>y>>z)
        {
            if(x==0&&y==0&&z==0)break;
            v[x].push_back(make_pair(-z,y));
            v[y].push_back(make_pair(-z,x));
        }
        ll minST=0,maxST=0;
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
                minST+=(-p.first);
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
        for(int i=0;i<=n;i++)
        {
            int len=v[i].size();
            for(int j=0;j<len;j++)
            {
                int c=v[i][j].first;
                v[i][j].first=c*(-1);
            }
        }
        memset(isVisited,false,sizeof(isVisited));
        pq.push(make_pair(0,0));
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            a=p.second;
            if(isVisited[a]==false)
            {
                maxST+=(p.first);
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
        minST=minST+maxST;
        if(minST&1)printf("Case %d: %d/2\n",tc,minST);
        else printf("Case %d: %d\n",tc,minST/2);
    }
}


