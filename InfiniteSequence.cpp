#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll pos=0;
    for(ll i=1;i<=n;i++)
    {
        pos+=i;
        if(pos==n)
        {
            cout<<i<<endl;
            return 0;
        }
        if(pos>n)
        {
            pos-=i;
            cout<<n-pos<<endl;
            return 0;
        }
    }
}
