#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int x=min(k2,k5);
    x=min(x,k6);
    int ans=256*x;
    x=min(k2-x,k3);
    ans+=(32*x);
    cout<<ans<<endl;
}
