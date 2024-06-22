#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long fact[1000010];
ll m=1000003;

void factorial()
{
    //memset(fact,1,sizeof(fact));
    fact[0]=1;
    for(ll i=1; i<=1000005; i++)
    {
        fact[i]=(fact[i-1]*i)%m;
    }
}

ll mod(int a,int b)
{
    if(b==0)
        return 1;
    if(b&1)
    {
        ll x=mod(a,b-1);
        return ((a%m)*(x%m))%m;
    }
    else
    {
        ll x=mod(a,b/2);
        return ((x%m)*(x%m))%m;
    }
}

int main()
{
    factorial();
    ll t,n,k;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>n>>k;
        if(k>n)
            printf("Case %lld: 0\n",i);
        else
        {
            if(n==k||k==0)
                printf("Case %lld: 1\n",i);
            else
            {
                if(k==1)
                    printf("Case %lld: %d\n",i,n);
                else
                {
                    ll ans=((fact[k]%m)*(fact[n-k]%m))%m;
                    printf("Case %lld: %lld\n",i,((fact[n]%m)*(mod(ans,m-2))%m)%m);
                    //printf("Case %lld: %lld\n",i,(fact[n]*mod(ans,m-2))%m);
                }
            }
        }
    }
}
