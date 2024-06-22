#include<bits/stdc++.h>
using namespace std;

struct act
{
    int st;
    int et;
}c[100007];

bool cmp(act a,act b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;
}

int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>c[i].st;
            cin>>c[i].et;
        }
        sort(c,c+n,cmp);
        int ans=0;
        int prev=-1;
        for(int i=0;i<n;i++)
        {
            if(c[i].st>=prev)
            {
                ans++;
                prev=c[i].et;
            }
        }
        cout<<ans<<endl;
    }
}
