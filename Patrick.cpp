#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=min(min(min(2*a+2*b,a+b+c),2*a+2*c),2*b+2*c);
    cout<<ans<<endl;
}
