#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        int ans=abs(a-b)*4;
        ans+=11;
        ans+=a*4;
        printf("Case %d: %d\n",i,ans+8);
    }
}
