#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x, odd=0, even=0;
        while(n--)
        {
            cin>>x;
            if(x&1)odd++;
            else even++;
        }
        if(odd&1)cout<<"YES\n";
        else
        {
            if(even>0 && odd>0)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
