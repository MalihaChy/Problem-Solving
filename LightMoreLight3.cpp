#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        bool flag=false;
        if(n==0)break;
        ll ex=1,cnt=0;
        while(n%2==0){
            cnt++;
            flag=true;
            n=n/2;
        }
        ex*=(cnt+1);
        cnt=0;
        for(ll i=3;i*i<=n;i+=2)
        {
            while(n%i==0){
                cnt++;
                flag=true;
                n=n/i;
            }
            ex*=(cnt+1);
            cnt=0;
        }
        if(ex%2==0||flag==false)cout<<"no\n";
        else cout<<"yes\n";
    }
}
