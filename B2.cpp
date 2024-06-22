#include<bits/stdc++.h>
using namespace std;

vector<int>v[110];
int ar[110];

int main()
{
    int n,m,x,y,z;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x>>z;
        for(int j=0; j<z; j++)
        {
            cin>>y;
            v[y].push_back(x);
            ar[x]++;
        }
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
    if(sn==-10)
    {
        cout<<"Not Possible\n";
        return 0;
    }
    if(q.size()==n)
    {
        cout<<q.front();
        q.pop();
        while(!q.empty())
        {
            cout<<" "<<q.front();
            q.pop();
        }
        cout<<"\n";
        return 0;
    }
}
