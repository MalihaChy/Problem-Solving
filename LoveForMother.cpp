#include<bits/stdc++.h>
using namespace std;

long long gcd_func(long long a, long long b)
{
    if(b==0)return a;
    return gcd_func(b, a%b);
}

int main()
{
    long long t, a, b, c, x, y, z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y>>z;
        a=a-x;
        b=b-y;
        c=c-z;
        long long gcd = gcd_func(a, b);
        gcd = gcd_func(gcd, c);
        if(gcd == 0)cout<<"Impossible\n";
        else cout<<gcd<<endl;
    }
}
