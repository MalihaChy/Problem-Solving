#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,x,r,d,cnt;
    cin>>n;
    while(n--)
    {
        cin>>x;
        r=sqrt(x);
        if(r*r==x)
        {
            bool no=false;
            d=0;
            while(x%2==0)
            {
                d++;
                x=x/2;
                if(d>3)
                {
                    no=true;
                    break;
                }
            }
            d++;
            r=sqrt(x);
            if(no==false)
            {
                for(ll i=3; i<=r; i+=2)
                {
                    if(no)break;
                    cnt=0;
                    while(x%i==0)
                    {
                        x=x/i;
                        cnt++;
                        if(cnt>3)
                        {
                            no=true;
                            break;
                        }
                    }
                    cnt++;
                    d=d*cnt;
                    if(d>3)
                    {
                        no=true;
                        break;
                    }
                }
            }
            cnt=2;
            if(x>1)
            {
                d=d*cnt;
            }
            if(d==3&&no==false)cout<<"YES"<<endl;
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}
