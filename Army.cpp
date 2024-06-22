#include<bits/stdc++.h>
using namespace std;

int ar[110];

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        cin>>ar[i];
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a+1;i<=b;i++)
        ans+=ar[i];
    cout<<ans<<endl;
}
