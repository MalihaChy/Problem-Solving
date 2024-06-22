#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll tree[400040];
ll lazy[400040];

void BuildTree(ll node,ll start,ll last)
{
    if(start==last) tree[node]=0;
    else
    {
        ll mid=(start+last)/2;
        BuildTree(2*node,start,mid);
        BuildTree(2*node+1,mid+1,last);
        tree[node]=tree[node*2]+tree[node*2+1];
    }
}

void UpdateRange(ll node,ll start,ll last,ll I,ll J,ll val)
{
    if(lazy[node]!=0)
    {
        tree[node]+=(last-start+1)*lazy[node];
        if(start!=last)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(start>last||start>J||last<I) return;
    if(start>=I&&last<=J)
    {
        tree[node]+=(last-start+1)*val;
        if(start!=last)
        {
            lazy[node*2]+=val;
            lazy[node*2+1]+=val;
        }
        return;
    }
    ll mid=(start+last)/2;
    UpdateRange(node*2,start,mid,I,J,val);
    UpdateRange(node*2+1,mid+1,last,I,J,val);
    tree[node]=tree[node*2]+tree[node*2+1];
}

ll QueryRange(ll node,ll start,ll last,ll I,ll J)
{
    if(start>last||start>J||last<I) return 0;
    if(lazy[node]!=0)
    {
        tree[node]+=(last-start+1)*lazy[node];
        if(start!=last)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(start>=I&&last<=J) return tree[node];
    ll mid=(start+last)/2;
    ll p1=QueryRange(node*2,start,mid,I,J);
    ll p2=QueryRange(node*2+1,mid+1,last,I,J);
    return (p1+p2);
}

int main()
{
    ll t,n,q,w,x,y,z,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&q);
        memset(tree,0,sizeof(tree));
        memset(lazy,0,sizeof(lazy));
        BuildTree(1,1,n);
        for(ll i=0;i<q;i++)
        {
            scanf("%lld",&w);
            if(w==0)
            {
                scanf("%lld%lld%lld",&x,&y,&z);
                ///update range x to y with z
                UpdateRange(1,1,n,x,y,z);
            }
            else if(w==1)
            {
                scanf("%lld%lld",&x,&y);
                ///query from x to y
                ans=QueryRange(1,1,n,x,y);
                printf("%lld\n",ans);
            }
        }
    }
}
