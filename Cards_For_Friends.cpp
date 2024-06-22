#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, w, h, n, ans;
    cin>>t;
    while(t--)
    {
        cin>>w>>h>>n;
        ans = 1;
        while(1)
        {
            if(w%2==0)
            {
                w /= 2;
                ans *= 2;
            }
            else if(h%2==0)
            {
                h /= 2;
                ans *= 2;
            }
            else break;
            if(ans>=n)break;
        }
        if(ans>=n)cout<<"YES\n";
        else cout<<"NO\n";
    }

}
