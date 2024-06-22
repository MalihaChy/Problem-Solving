#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010],v2[10010];
int ar[10010];

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        v[y].push_back(x);    ///in deg count
        v2[x].push_back(y);    /// kar kar theke arrow ashe
    }
    queue<int>q;
    int sn=-10,flag=0,hello=2;
    for(int i=1; i<=n; i++)
    {
        ar[i]=v[i].size();
        if(ar[i]==0&&flag==0)
        {
            sn=i;
            flag=1;
        }
    }
    while(hello==2&&sn!=-10)
    {
        ar[sn]=-100;
        q.push(sn);
        int sz=v2[sn].size();
        for(int i=0; i<sz; i++)
        {
            ar[v2[sn][i]]--;
        }
        for(int i=1; i<=n; i++)
        {
            if(ar[i]==0)
            {
                sn=i;
                hello=2;
                break;
                cout<<"ki\n";
            }
            else hello=10000;
        }
        //cout<<hello<<endl;
    }
    if(q.size()==n){
        cout<<q.front();
        q.pop();
        while(!q.empty()){
            cout<<" "<<q.front();
            q.pop();
        }
        cout<<"\n";
        return 0;
    }
    cout<<"Sandro fails.\n";
}
