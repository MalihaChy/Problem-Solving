#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll Count_Unique_Substrings(string s,ll k)
{
    set<string>st;
    ll x=s.size()-k;
    for(ll i=0;i<=x;i++)
    {
        st.insert(s.substr(i,k));
    }
    return st.size();
}

int main()
{
    ll t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        cout<<Count_Unique_Substrings(s,k)<<endl;
    }
}

