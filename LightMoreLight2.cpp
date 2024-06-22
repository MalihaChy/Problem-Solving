#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        ll cnt=0;
        if(n==0)break;
        while(n%2==0)
        {
            cnt++;
            n=n/2;
            //cout<<2<<" ";
        }
        ll x=3,loop_control=sqrt(n)+2,sum=cnt+1;
        cnt=0;
        //cout<<loop_control<<endl;
        while(x*x<=n)
        {
            if(n%x==0)
            {
                cnt++;
                //cout<<x<<" ";
                n=n/x;
            }
            else{
                if(cnt!=0)sum*=(cnt+1);
                cnt=0;
                x+=2;
            }
        }
        if(sum==1||sum%2==0)cout<<"no\n";
        else if(sum%2!=0)cout<<"yes\n";
    }

}
