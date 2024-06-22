#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,ans;
    cin>>n>>k;
    ans=ceil((n*2.0)/k);
    ans+=ceil((n*5.0)/k);
    ans+=ceil((n*8.0)/k);
    cout<<ans<<endl;
    //cout<<ceil((n*2.0)/k)+ceil((n*5.0)/k)+ceil((n*8.0)/k)<<endl;
}
