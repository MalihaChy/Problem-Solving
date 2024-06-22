#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m,c,serial=0;
        string a,b;
        cin>>n>>m;
        vector< pair<int,int> >v[n];
        bool isVisited[n];
        memset(isVisited,false,sizeof(isVisited));
        map<string,int>mp;
        for(int i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            if(mp.find(a)==mp.end())
            {
                mp[a]=serial;
                serial++;
            }
            if(mp.find(b)==mp.end())
            {
                mp[b]=serial;
                serial++;
            }
            int x=mp.find(a)->second;
            int y=mp.find(b)->second;
            v[x].push_back(make_pair(-c,y));
            v[y].push_back(make_pair(-c,x));
        }

        ll ans=0;
        priority_queue< pair<ll,ll> >pq;
        pq.push(make_pair(0,0));
        pair<ll,ll>p;
        ll A,B,sz;
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            A=p.second;
            if(isVisited[A]==false)
            {
                ans+=(-p.first);
                isVisited[A]=true;
                sz=v[A].size();
                for(ll i=0; i<sz; i++)
                {
                    B=v[A][i].second;
                    if(isVisited[B]==false)
                        pq.push(v[A][i]);
                }
            }
        }
        if(tc!=t)cout<<ans<<"\n\n";
        else cout<<ans<<"\n";
    }

}
