#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll power(ll a,ll b)
{
    ll ans=a;
    for(ll i=1;i<b;i++)
        ans=ans*a;
    return ans;
}

ll prime(ll x)
{
    if(x==1)return 2;
    ll cnt=0,sum=0,n=x;
    while(x%2==0)
    {
        cnt++;
        x=x/2;
    }
    if(cnt>0)sum=power(2,cnt);
    for(ll i=3;i<=sqrt(x);i+=2)
    {
        cnt=0;
        while(x%i==0)
        {
            cnt++;
            x=x/i;
        }
        if(cnt>0)sum+=power(i,cnt);
    }
    if(x>1)sum+=x;
    //cout<<sum<<endl;
    if(sum==n)return sum+1;
    else return sum;
}

int main()
{
    ll n;
    vector<ll>v;
    for(ll j=1;;j++)
    {
        cin>>n;
        if(n){
            v.push_back(prime(n));
            //printf("Case %lld: %lld\n",j,prime(n));
        }
        else break;
    }
    for(ll i=0;i<v.size();i++)
        printf("Case %lld: %lld\n",i+1,v[i]);
}
