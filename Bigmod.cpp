#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bigmod(ll a,ll b,ll M){
    if(b==0)
        return 1;
    if(b%2==0){
        ll x=bigmod(a,b/2,M);
        x=((x%M)*(x%M))%M;
        return x;
    }
    else{
        ll x=bigmod(a,b-1,M);
        x=((a%M)*(x%M))%M;
        return x;
    }
}


int IterativeBigmod(ll a,ll b,ll m)
{
    a=a%m;
    ll x= 1;
    while(b)
    {
        if(b&1)x=(x*a)%m;
        a=(a*a)%m;
        b=b>>1;
    }
    return x;
}

int main()
{
    ll a,b,M,c;
    while(scanf("%lld%lld%lld",&a,&b,&M)!=EOF){
        //scanf("%c%c",&c,&c);
        ll ans=bigmod(a,b,M);
        printf("%lld\n",ans);
    }
}
