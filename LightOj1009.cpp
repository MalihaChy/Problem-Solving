#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>G[20005];
int mark[20005];
int color[20005];
enum {NOT_VISITED, BLACK, RED};
int bfs(int src)
{
    queue<int> q;
    ll black = 0, red = 0;
    q.push(src);
    color[src] = BLACK;
    black++;
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for(int i = 0;i<G[u].size(); i++){
                int v = G[u][i];
            if(color[v] == NOT_VISITED){
                q.push(v);
                if(color[u] == BLACK){
                    color[v] = RED;
                    red++;
                }
                else
                {
                    color[v] = BLACK;
                    black++;
                }
            }
        }
    }
    return max(black, red);
}

int main()
{
    int t;
    scanf("%i", &t);
    for(int i = 1;i<=t;i++){
        int n;
        scanf("%i", &n);
        for(int i = 0;i<20005;i++)G[i].clear();
        for(int j = 0; j<n; j++){
                int u, v;
            scanf("%i %i", &u, &v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        ll sum = 0;
        memset(color, 0, sizeof(color));
        for(int j = 0; j < 20005; j++){
            if(color[j] == 0 and !G[j].empty())
                sum += bfs(j);
        }
        printf("Case %i: %lli\n",i, sum);
    }
}
