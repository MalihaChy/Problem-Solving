#include<bits/stdc++.h>
using namespace std;

//vector<int>v[1000010];
//int ar[1000010];

int main()
{
    int n,m,x,y;
    while(1)
    {
        cin>>n>>m;
        vector<int>v[n+1];
        int ar[n+1];
        for(int i=0;i<=n;i++)v[i].clear();
        memset(ar,0,sizeof(ar));
        if(n==0&&m==0)return 0;
        for(int i=0; i<m; i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            ar[y]++;
        }
        int sn=-10;

        queue<int>q;
        int break_while=-10;
        while(break_while==-10)
        {
            for(int i=1; i<=n; i++)
            {
                if(ar[i]==0)
                {
                    sn=i;
                    break_while=-10;
                    break;
                }
                else break_while=-1000;
            }
            if(break_while==-10)
            {
                q.push(sn);
                ar[sn]=-10;
                int sz=v[sn].size();
                for(int i=0; i<sz; i++)
                {
                    ar[v[sn][i]]--;
                }
            }
        }
        if(sn==-10||q.size()!=n)
        {
            cout<<"IMPOSSIBLE\n";
        }
        if(q.size()==n)
        {
            while(!q.empty())
            {
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
    }
}

