#include<bits/stdc++.h>
using namespace std;

int n;
int ar[100010],tree[300030];

void BuildTree(int node,int start,int last)
{
    if(start==last)tree[node]=ar[last];
    else
    {
        int mid=(start+last)/2;
        BuildTree(node*2,start,mid);
        BuildTree(node*2+1,mid+1,last);
        tree[node]=min(tree[node*2],tree[node*2+1]);
    }
}

int Query(int node,int start,int last,int I,int J)
{
    if(J<start||last<I)return 10000000;
    if(I<=start&&last<=J)return tree[node];
    else
    {
        int mid=(start+last)/2;
        int p1=Query(2*node,start,mid,I,J);
        int p2=Query(2*node+1,mid+1,last,I,J);
        return min(p1,p2);
    }
}

int main()
{
    int t,q,I,J,ans;
    scanf("%d",&t);
    for(int kase=1; kase<=t; kase++)
    {
        scanf("%d%d",&n,&q);
        for(int i=1; i<=n; i++)scanf("%d",&ar[i]);
        BuildTree(1,1,n);
        printf("Case %d:\n",kase);
        for(int i=0; i<q; i++)
        {
            scanf("%d%d",&I,&J);
            ans=Query(1,1,n,I,J);
            printf("%d\n",ans);
        }
    }
}
