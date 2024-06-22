#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b,ll &x,ll &y)
{
    ll x1,y1;
    ll g;
    //if(b>a)gcd(b,a,y,x);
    if(b==0)
    {
        x=1;
        y=0;
        return a;
        //cout<<x<<" "<<y<<" "<<a<<endl;
    }
    g=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
    //cout<<x<<" "<<y<<" "<<g<<endl;
}

int main()
{
    ll a,b,x,y;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        //if(a<b)swap(a,b);
        ll g=gcd(a,b,x,y);
        cout<<x<<" "<<y<<" "<<g<<endl;
    }
}
