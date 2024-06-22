#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,w,x,y,z;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>w;
        vector< pair<int,int> >v[n+1];
        bool isVisited[n+1];
        cout<<"Case "<<tc<<":\n";
        for(int ww=0;ww<w;ww++)
        {
            cin>>x>>y>>z;
            v[x].push_back(make_pair(-z,y));
            v[y].push_back(make_pair(-z,x));
            memset(isVisited,false,sizeof(isVisited));

            long long ans=0;
            priority_queue< pair<int,int> >pq;
            pq.push(make_pair(0,1));
            pair<int,int>p;
            int a,b,sz,node=0;
            while(!pq.empty())
            {
                p=pq.top();
                pq.pop();
                a=p.second;
                if(isVisited[a]==false)
                {
                    ans+=(-p.first);
                    node++;
                    isVisited[a]=true;
                    sz=v[a].size();
                    for(int i=0;i<sz;i++)
                    {
                        b=v[a][i].second;
                        if(isVisited[b]==false)
                            pq.push(v[a][i]);
                    }
                }

            }
            if(node==n)cout<<ans<<endl;
            else cout<<-1<<endl;
        }
    }
}
