#include<bits/stdc++.h>
using namespace std;

vector<int>v[20020];
bool isVisited[20020];
int color[20020];

int BFS(int s)
{
    int one=0,two=0;
    isVisited[s]=true;
    color[s]=1;
    one++;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        int sz=v[s].size();
        for(int i=0;i<sz;i++)
        {
            int x=v[s][i];
            if(isVisited[x]==false){
                isVisited[x]=true;
                q.push(x);
                if(color[s]==1){
                    color[x]=2;
                    two++;
                }
                else if(color[s]==2){
                    color[x]=1;
                    one++;
                }
            }
        }
    }
    return max(one,two);
}

int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%d",&n);

        memset(isVisited,false,sizeof(isVisited));
        memset(color,0,sizeof(color));
        for(int i=0;i<20020;i++)v[i].clear();

        set<int>nodes;
        nodes.clear();
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            nodes.insert(x);
            nodes.insert(y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        vector<int>vv;
        vv.clear();
        set<int>::iterator it;
        for(it=nodes.begin();it!=nodes.end();it++){
            vv.push_back(*it);
        }

        int z=vv.size();
        int ans=0;
        for(int i=0;i<z;i++){
            if(isVisited[vv[i]]==false){
                ans+=BFS(vv[i]);
            }
        }
        //printf("%d",z);
        //z=vv[z-1];
        /*one=0;
        two=0;
        for(int i=1;i<20020;i++){
            if(color[i]==1){
                //printf("%d r    ",i);
                one++;
            }
            else if(color[i]==2){
                //printf("%d b    ",i);
                two++;
            }
        }*/
        printf("Case %d: %d\n",tc,ans);
    }
}

