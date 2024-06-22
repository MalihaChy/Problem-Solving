#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d",&n);
        vector< pair<int,int> >v[n+1];
        bool isVisited[n+1];
        memset(isVisited,false,sizeof(isVisited));
        int total=0;
        int ar[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&x);
                if(x!=0){
                    ar[i][j]=x;
                    total+=x;
                }
                else ar[i][j]=100000;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                x=min(ar[i][j],ar[j][i]);
                if(x!=100000){
                    v[i].push_back(make_pair(-x,j));
                    v[j].push_back(make_pair(-x,i));
                }
            }
        }
        int ans=0;
        int node=0;
        priority_queue< pair<int,int> >pq;
        pq.push(make_pair(0,1));
        pair<int,int>p;
        int a,b,sz;
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
        if(node==n)printf("Case %d: %d\n",tc,total-ans);
        else printf("Case %d: -1\n",tc);
    }

}
