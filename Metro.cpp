#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int ar1[n+1],ar2[n+1];
    for(int i=1;i<=n;i++)
        cin>>ar1[i];
    for(int i=1;i<=n;i++)
        cin>>ar2[i];
    if(ar1[1]==1){
        if(ar1[s]==1||(ar1[n]==1&&ar2[s]==1))cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";

}
