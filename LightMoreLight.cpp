#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        else{
            //int flag=0;
            set<ll>s;
            s.insert(1);
            s.insert(n);
            //ll loop_control=sqrt(n)+1;
            for(ll i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    s.insert(i);
                    s.insert(n/i);
                }
            }
            //set<ll>::iterator it;
            //for(it=s.begin();it!=s.end();it++)
                //cout<<*it<<" ";
            if(s.size()%2==0)cout<<"no\n";
            else cout<<"yes\n";
        }
    }
}
