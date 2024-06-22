#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,m,query,s,d;
    cin>>t;
    for(int kase=1; kase<=t; kase++)
    {
        cin>>n>>m>>query;
        vector<int>v[n+1];
        //bool ar[n+1][n+1];
        /*for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
                ar[i][j]=false;
        }*/
        for(int i=0; i<m; i++)
        {
            cin>>s>>d;
            v[s].push_back(d);
            v[d].push_back(s);
            //ar[s][d]=true;
            //ar[d][s]=true;
        }
        printf("Case %d:\n",kase);
        while(query--)
        {
            cin>>s>>d;
            bool found=false;
            //if(ar[s][d]==true)cout<<"Chicken dinner coming soon!\n";
            //else
            {
                queue<int>q;
                bool visited[n+1];
                memset(visited,false,sizeof(visited));
                q.push(s);
                visited[s]=true;
                while(!q.empty())
                {
                    if(found)break;
                    int u=q.front();
                    q.pop();
                    for(int i=0; i<v[u].size(); i++)
                    {
                        int x=v[u][i];
                        //ar[s][x]=true;
                        //ar[x][s]=true;
                        //visited[x]=true;
                        //cout<<x<<endl<<endl;
                        if(x==d){
                            //cout<<"Chicken dinner coming soon!\n";

                            found=true;
                            break;
                        }
                        else if(!visited[x]){
                            q.push(x);
                            visited[x]=true;
                        }
                    }
                }
                if(found)cout<<"Chicken dinner coming soon!\n";
                if(found==false)cout<<"Eat vegetables!\n";
            }
        }
    }
}
