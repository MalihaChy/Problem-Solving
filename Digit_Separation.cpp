#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, ans = 0;
    cin>>a;
    while(1)
    {
        ans = 0;
        while(a)
        {
            ans += (a%10);
            a = a/10;
        }
        if(ans/10)a = ans;
        else break;
    }
    cout<<ans<<endl;
}
