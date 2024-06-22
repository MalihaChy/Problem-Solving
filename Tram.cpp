#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,people=0,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        people-=a;
        people+=b;
        ans=max(people,ans);
    }
    cout<<ans<<endl;
}
