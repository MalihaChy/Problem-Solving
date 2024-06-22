#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)cout<<0<<endl;
        else if(a>b)
        {
            if((a-b)&1)cout<<2<<endl;
            else cout<<1<<endl;
        }
        else
        {
            if((b-a)&1)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}
