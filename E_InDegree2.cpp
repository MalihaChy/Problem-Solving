#include<bits/stdc++.h>
using namespace std;

//vector<int>v[110];
int ar[110];

int main()
{
    int n,m,x,y,z;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)return 0;
        else
        {
            //v[110].clear();
            vector<int>v[n+1];
            memset(ar,0,sizeof(ar));
            for(int i=0; i<m; i++)
            {
                cin>>x>>y;
                v[x].push_back(y);
                ar[y]++;
            }
            int sn=-10,flag=1;
            queue<int>q,q2;
            int break_while=-10;
            while(break_while==-10&&flag==1)
            {
                flag=0;
                for(int i=1; i<=n; i++)
                {
                    if(ar[i]==0)
                    {
                        //cout<<i<<endl;
                        q2.push(i);
                        break_while=-10;
                        flag=1;
                        //break;
                    }
                    //else break_while=-1000;
                }
                if(break_while==-10)
                {
                    while(!q2.empty())
                    {
                        sn=q2.front();
                        q2.pop();
                        q.push(sn);
                        ar[sn]=-10;
                        int sz=v[sn].size();
                        for(int i=0; i<sz; i++)
                        {
                            ar[v[sn][i]]--;
                        }
                    }
                }
                //cout<<sn<<endl;
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
            }
        }
    }
}
