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


bool isPrime(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}

int main()
{
    ll x;
    while(cin>>x && x)
    {
        bool flag=true;
        if(isPrime(x))printf("%lld is normal.\n",x);
        else{
            for(ll i=2;i<x;i++)
            {
                if(i!=bigmod(i,x,x)){
                    printf("%lld is normal.\n",x);
                    flag=false;
                    break;
                }
            }
            if(flag)printf("The number %lld is a Carmichael number.\n",x);
        }
    }
}
