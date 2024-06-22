#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        ll x=k/2;
        if(k&1)cout<<(x*(a-b))+a<<endl;
        else cout<<(x*(a-b))<<endl;
    }

}
