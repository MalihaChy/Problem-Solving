#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    long long sum=0;
    for(int i=0;i<sz;i++)
    {
        sum+=(s[i]-48);
    }
    sz=sum%3;
    if(sz==0)cout<<0<<"\n";
    else if(sz==1)cout<<2<<"\n";
    else cout<<1<<"\n";
}
