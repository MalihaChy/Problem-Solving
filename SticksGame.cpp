#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        int ans=0;
        while(n--)
        {
            cin>>x>>y;
            ans+=(y/2);
        }
        cout<<ans/2<<endl;
    }
}
