#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        int one = 0, two = 0;
        while(n--)
        {
            cin>>x;
            if(x==1)one++;
            else two++;
        }
        if(two%2 == 0)
        {
            if(one%2 == 0)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            if(one>=2)
            {
                one-=2;
                if(one%2 == 0)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }

    }
}
