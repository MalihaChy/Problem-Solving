#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n;
    ll r,g,b,sum,R,G,B;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=1;
        g=1;
        b=1;
        //sum=3;
        R=1;
        G=1;
        B=1;
        for(ll i=2;i<=n;i++)
        {
            R=r*1+g*4+b*7;
            G=r*2+g*5+b*8;
            B=r*3+g*6+b*9;
            //sum=(R+G+B);
            //sum=sum%1000000007;
            r=R%1000000007;
            g=G%1000000007;
            b=B%1000000007;
        }
        sum=(R+G+B)%1000000007;
        cout<<sum<<endl;
    }
}
