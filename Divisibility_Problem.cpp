#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, mod;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        mod = a%b;
        if(mod == 0)cout<<0<<endl;
        else cout<<b-mod<<endl;
    }
}
