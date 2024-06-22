#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        vector<ll>v;
        ll x=n,y=m;
        while(m%2==0){
            m=m/2;
            v.push_back(2);
        }
        for(ll i=3;i*i<=m;i+=2)
        {
            while(m%i==0)
            {
                m=m/i;
                v.push_back(i);
            }
        }
        if(m>1)v.push_back(m);
        ll sz=v.size();
        //for(ll i=0;i<sz;i++)
        //    cout<<v[i]<<" ";

        ll ar[n+1];
        memset(ar,0,sizeof(ar));
        for(ll j=0;j<sz;j++){
            for(ll i=2;i<=n;i++){
                if(ar[i]!=1&&i%v[j]==0){
                    ar[i]=1;
                    v[j]=1;
                    //cout<<i<<" ";
                    break;
                }
            }
        }
        bool flag=false;
        for(ll i=0;i<sz;i++)
        {
            if(v[i]!=1){
                printf("%lld does not divide %lld!\n",y,x);
                flag=true;
                break;
            }
        }
        if(!flag)printf("%lld divides %lld!\n",y,x);

    }

}
