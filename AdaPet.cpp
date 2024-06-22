#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,k,n;
    vector<ll>v;
    string s;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        c=s[0];
        ll k=s.size();
        if(n==1)cout<<k<<endl;
        else if(k==1)cout<<n<<endl;
        else
        {
            for(ll i=1; i<k; i++)
            {
                if(c==s[i])
                {
                    v.push_back(i);
                    //cout<<s[i]<<endl;
                }
                //cout<<"DIE"<<endl;
            }
            ll sz=v.size();
            //cout<<"h"<<sz<<endl;
            if(sz==0)cout<<k*n<<endl;
            else
            {
                ll flag=1;
                for(ll i=0; i<sz; i++)
                {
                    ll idx=v[i];
                    ll j,x;
                    for(j=idx,x=0; j<k && x<k; j++,x++)
                    {
                        if(s[x]!=s[j])
                        {
                            break;
                        }
                    }
                    if(j==k)
                    {
                        cout<<(k*n)-((k-idx)*(n-1))<<endl;
                        flag=0;
                        break;
                    }
                }
                if(flag==1)cout<<k*n<<endl;
            }
        }
        v.clear();
    }
}
