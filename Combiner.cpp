#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a,b;
        cin>>a>>b;
        int sz=min(a.size(),b.size());
        string s;
        for(int i=0;i<sz;i++)
        {
            s+=a[i];
            s+=b[i];
        }
        if(a.size()<b.size())a=b;
        for(int i=sz;i<a.size();i++)s+=a[i];
        cout<<s<<endl;
    }
}
