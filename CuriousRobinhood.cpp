#include<bits/stdc++.h>
using namespace std;

int ar[100010];
int tree[300030];

void BuildTree(int node,int start,int last)
{
    if(start==last)tree[node]=ar[start];
    else
    {
        int mid=(start+last)/2;
        BuildTree(node*2,start,mid);
        BuildTree(node*2+1,mid+1,last);
        tree[node]=tree[node*2]+tree[node*2+1];
    }
}

int Query(int node,int start,int last,int I,int J)
{
    if(J<start||last<I)return 0;
    if(I<=start&&last<=J)return tree[node];
    else
    {
        int mid=(start+last)/2;
        int p1=Query(2*node,start,mid,I,J);
        int p2=Query(node*2+1,mid+1,last,I,J);
        return (p1+p2);
    }
}

void Update(int node,int start,int last,int idx,int val)
{
    if(start==last)
    {
        ar[idx]+=val;
        tree[node]+=val;
    }
    else
    {
        int mid=(start+last)/2;
        if(start<=idx&&idx<=mid)
            Update(2*node,start,mid,idx,val);
        else
            Update(2*node+1,mid+1,last,idx,val);
        tree[node]=tree[node*2]+tree[node*2+1];
    }
}

void UpdateWithZero(int node,int start,int last,int idx)
{
    if(idx>last||idx<start) return;
    if(idx<=start&&idx>=last){
        tree[node]=0;
        return;
    }
    int mid=(start+last)/2;
    UpdateWithZero(2*node,start,mid,idx);
    UpdateWithZero(2*node+1,mid+1,last,idx);
    tree[node]=tree[node*2]+tree[node*2+1];
}

int main()
{
    int t,n,q,x,y,z,ans;
    scanf("%d",&t);
    for(int kase=1; kase<=t; kase++)
    {
        scanf("%d%d",&n,&q);
        for(int i=0; i<n; i++)scanf("%d",&ar[i]);
        printf("Case %d:\n",kase);
        BuildTree(1,0,n-1);
        for(int i=0; i<q; i++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&y);
                ///update y with zero
                UpdateWithZero(1,0,n-1,y);
                ans=ar[y];
                ar[y]=0;
                printf("%d\n",ans);
            }
            if(x==2)
            {
                scanf("%d%d",&y,&z);
                ///add z money with y sack
                Update(1,0,n-1,y,z);
            }
            if(x==3)
            {
                scanf("%d%d",&y,&z);
                ///find sum from y to z
                ans=Query(1,0,n-1,y,z);
                printf("%d\n",ans);
            }
        }
    }
}
