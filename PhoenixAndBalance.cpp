#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n /= 2;
        int ans = 2;
        for(int i=2; i<=n; i++)ans = ((ans*2)+2);
        cout<<ans<<endl;
    }
}
