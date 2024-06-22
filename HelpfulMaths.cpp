#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a,b,c;
    cin>>s;
    int sz=s.size();
    for(int i=0;i<sz;i+=2)
    {
        if(s[i]=='1')
            a+="1+";
        if(s[i]=='2')
            b+="2+";
        if(s[i]=='3')
            c+="3+";
    }
    a+=b;
    a+=c;
    int x=a.size();
    a.erase(x-1);
    cout<<a<<endl;
}
