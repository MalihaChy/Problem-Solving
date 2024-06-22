#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a,b,c,d,e;
    while(cin>>t)
    {
        cin>>a>>b>>c>>d>>e;
        int cnt=0;
        if(a==t)
            cnt++;
        if(b==t)
            cnt++;
        if(c==t)
            cnt++;
        if(d==t)
            cnt++;
        if(e==t)
            cnt++;
        cout<<cnt<<endl;
    }
}
