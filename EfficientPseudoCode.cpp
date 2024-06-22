#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod=1000000007;

ll bigmod(ll n,ll m){
    if(m==0)return 1;
    if(m%2==0){
        ll x=bigmod(n,m/2);
        return ((x%mod)*(x%mod))%mod;
    }
    else{
        ll x=bigmod(n,m-1);
        return ((x%mod)*(n%mod))%mod;
    }
}

ll prime_factorization(ll p)
{
    ll cnt=0;
    ll sum=0;
    ll temp;
    while(p%2==0){
        cnt++;
        p=p/2;
    }
    cnt++;
    sum=((pow(2,cnt))-1);//%mod;
    sum=sum%mod;
    //cout<<sum<<endl;
    for(ll i=3;i<=sqrt(p);i+=2)
    {
        cnt=0;
        while(p%i==0){
            cnt++;
            p=p/i;
        }
        cnt++;
        //temp=(pow(i,cnt))-1;
        //temp=temp/()
        sum=sum*(bigmod(i,cnt)-1)*bigmod(i-1,mod-2);
        //sum*=(((pow(i,cnt))-1)/(i-1));//%mod;
        //cout<<sum<<endl;
        sum=sum%mod;
    }
    if(p>1)sum=sum*bigmod(p,2)*bigmod(p-1,mod-2);
    //if(p>1)sum*=(((p*p)/(p-1))%mod);
    return sum%mod;
}

int main()
{
    ll t;
    cin>>t;
    ll n,m,p;
    for(ll j=1;j<=t;j++){
        cin>>n>>m;
        p=bigmod(n,m);
        cout<<p<<endl;
        //p=pow(n,m);
        //cout<<p<<endl;
        printf("Case %lld: %lld\n",j,prime_factorization(p));
    }
}
