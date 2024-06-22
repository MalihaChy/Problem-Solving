#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int ans = a, c, d;
    while(1)
    {
        if(a<b)break;
        c = a/b;
        d = a%b;
        ans+=c;
        a = c+d;
    }
    cout<<ans<<endl;
}
