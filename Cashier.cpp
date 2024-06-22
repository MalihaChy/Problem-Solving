#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,l,a;
    cin>>n>>l>>a;
    if(n>0)
    {
        ll ar1[n],ar2[n];
        cin>>ar1[0]>>ar2[0];
        ll gap=ar1[0]/a;
        //ll customer=ar1[0]+ar2[0];
        for(ll i=1; i<n; i++)
        {
            cin>>ar1[i]>>ar2[i];
            //customer+=ar2[i];
            ll x=ar1[i]-(ar1[i-1]+ar2[i-1]);
            if(x>=a)gap+=(x/a);
        }
        gap+=(l-(ar1[n-1]+ar2[n-1]))/a;
        cout<<gap<<endl;
        //cout<<(l-customer)/a<<endl;
    }
    else cout<<l/a<<endl;
}
