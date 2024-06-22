#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ar[100050];
ll OddTree[300050],EvenTree[300050];

void BuildTree(ll node,ll start,ll last)
{
    if(start==last)
    {
        if(ar[start]%2==1)
        {
            OddTree[node]=1;
            EvenTree[node]=0;
        }
        else if(ar[start]%2==0)
        {
            EvenTree[node]=1;
            OddTree[node]=0;
        }
    }
    else
    {
        ll mid=(start+last)/2;
        BuildTree(2*node,start,mid);
        BuildTree(2*node+1,mid+1,last);
        EvenTree[node]=EvenTree[node*2]+EvenTree[node*2+1];
        OddTree[node]=OddTree[node*2]+OddTree[node*2+1];
    }
}

void Update(ll node,ll start,ll last,ll idx,ll val)//,ll tree[300050])
{
    if(start==last)
    {
        if(val%2==1)
        {
            OddTree[node]=1;
            EvenTree[node]=0;
        }
        else if(val%2==0)
        {
            EvenTree[node]=1;
            OddTree[node]=0;
        }
    }
    else
    {
        ll mid=(start+last)/2;
        if(start<=idx&&idx<=mid) Update(2*node,start,mid,idx,val);
        else Update(2*node+1,mid+1,last,idx,val);
        OddTree[node]=OddTree[node*2]+OddTree[node*2+1];
        EvenTree[node]=EvenTree[node*2]+EvenTree[node*2+1];
    }
}

ll Query(ll node,ll start,ll last,ll I,ll J,ll x)
{
    if(J<start||last<I)return 0;
    if(I<=start&&last<=J)
    {
        if(x==1)return EvenTree[node];
        else if(x==2)return OddTree[node];
    }
    ll mid=(start+last)/2;
    ll p1=Query(2*node,start,mid,I,J,x);
    ll p2=Query(2*node+1,mid+1,last,I,J,x);
    return (p1+p2);
}

int main()
{
    ll n;
    scanf("%lld",&n);
    for(ll i=1; i<=n; i++)
        scanf("%lld",&ar[i]);
    ll q,a,b,c;
    BuildTree(1,1,n);
    scanf("%lld",&q);
    for(ll i=0; i<q; i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==0)
        {
            if(ar[b]%2!=c%2)Update(1,1,n,b,c);
            ar[b]=c;
        }
        else if(a==1)printf("%lld\n",Query(1,1,n,b,c,1));
        else if(a==2)printf("%lld\n",Query(1,1,n,b,c,2));
    }
}
