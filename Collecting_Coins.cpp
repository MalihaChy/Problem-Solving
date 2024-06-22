#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, n;
        cin>>a>>b>>c>>n;
        int mx = max(a, max(b, c));
        n = n-((mx-a)+(mx-b)+(mx-c));
        if(n<0)cout<<"NO\n";
        else
        {
            if(n%3 == 0)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
