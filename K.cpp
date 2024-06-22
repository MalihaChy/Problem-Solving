#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    double x,y,dis;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d",&n);
        vector< pair<double,double> >vp;
        for(int i=0;i<n;i++)
        {
            scanf("%lf%lf",&x,&y);
            vp.push_back(make_pair(x,y));
        }

        vector< pair<double,int> >v[n];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                x=(vp[i].first-vp[j].first);
                y=(vp[i].second-vp[j].second);
                dis=sqrt((x*x)+(y*y));
                v[i].push_back(make_pair(-dis,j));
                v[j].push_back(make_pair(-dis,i));
            }
        }
        bool isVisited[n];
        memset(isVisited,false,sizeof(isVisited));
        priority_queue< pair<double,int> >pq;
        pq.push(make_pair(0,0));
        pair<double,int>p;
        double ans=0;
        int a,b,sz;
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
                for(int i=0;i<sz;i++)
                {
                    b=v[a][i].second;
                    if(isVisited[b]==false)
                        pq.push(v[a][i]);
                }
            }
        }
        if(tc!=t)printf("%.2lf\n\n",ans);
        else printf("%.2lf\n",ans);
    }
}
