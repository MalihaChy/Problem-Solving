#include<bits/stdc++.h>
using namespace std;

#define ll long long

void prime_factorization(ll x)
{
    ll i;
    ll c;
    c = x;
    ll cnt=0,d;
    while ((c % 2) == 0)
    {
        cnt++;
        c = c / 2;
    }
    d=cnt+1;
    cnt=0;
    for (i=3; i*i<= c; i+=2)
    {
        while ((c % i) == 0)
        {
            cnt++;
            c = c / i;
        }
        d*=(cnt+1);
        cnt=0;
    }
    if (c > 1) d*=(cnt+2);
    if(d%2==0)cout<<"no\n";
    else cout<<"yes\n";
}


int main()
{
    ll x;
    while(1)
    {
        cin>>x;
        if(x==0)break;
        prime_factorization(x);
    }
}

