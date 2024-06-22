#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool ab=false;
    int cnt=0,a,b;
    bool ba=false;
    cin>>s;
    int sz=s.size()-1;
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='A')
        {
            if(s[i+1]=='B')
            {
                ab=true;
                a=i;
                b=i+1;
                break;
            }
        }
    }
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='B')
        {
            if(s[i+1]=='A'&&a!=i+1&&b!=i)
            {
                ba=true;
                break;
            }
        }
    }
    if(ab&&ba)cout<<"YES\n";
    else cout<<"NO\n";

}
