#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a = abs(b - a);
        k = ceil(a/10.0);
        cout<<k<<endl;
    }
}
