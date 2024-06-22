#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        bool flag=false;
        for(ll j=l; j<=r; j++)
        {
            if(!flag)
            {
                for(ll i=2;; i++)
                {
                    if(j*i<=r)
                    {
                        cout<<j<<" "<<j*i<<endl;
                        flag=true;
                        break;
                    }
                    else if(j*i>r)break;
                }
            }
        }
    }
}
