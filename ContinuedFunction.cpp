#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,sz,x;
    while(cin>>n>>m)
    {
        //r=n%m;
        //
        vector<ll>v;
        while(n%m)
        {
            v.push_back(n/m);
            x=m;
            m=n%m;
            n=x;
        }
        v.push_back(n/m);
        sz=v.size();
        cout<<"["<<v[0];
        if(sz>1)cout<<";"<<v[1];
        for(ll i=2;i<sz;i++)
            cout<<","<<v[i];//<<endl;
        cout<<"]\n";
    }
}
