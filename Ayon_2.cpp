#include<bits/stdc++.h>
using namespace std;

int n,m,u,v,w;
int source,destination;
vector< pair<int,int> >graph[10000];
int d[10000],parent[10000];
priority_queue< pair<int,int> >pq;
stack<int>st;

void path(int x)
{
    st.push(x);
    if(parent[x]!=x)
        path(parent[x]);
}

void Dijkstra(int source)
{
    for(int i=1;i<=n;i++)
    {
        d[i]=-10000000;
        parent[i]=i;
    }
    d[source]=0;
    parent[source]=source;
    pq.push(make_pair(d[source],source));
    while(!pq.empty())
    {
        pair<int,int>a;
        a=pq.top();
        pq.pop();
        int u1=a.second;
        int sz=graph[u1].size();
        for(int i=0;i<sz;i++)
        {
            int v1=graph[u1][i].second;
            int c=graph[u1][i].first;
            if(d[v1]<d[u1]+c)
            {
                d[v1]=d[u1]+c;
                parent[v1]=u1;
                pq.push(make_pair(d[v1],v1));
            }
        }
    }
    path(destination);
    printf("Number of nodes in the path : %d\n",st.size());
    printf("Longest path between the nodes %d and %d is : ",source, destination);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    printf("Longest distance : %d\n",d[destination]);
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(make_pair(w,v));
    }
    cin>>source>>destination;
    Dijkstra(source);
}

/*
6 7
1 2 2
1 4 3
2 5 3
2 3 5
4 3 1
5 6 4
3 6 2
1
6          */
