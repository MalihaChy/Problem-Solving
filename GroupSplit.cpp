#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll ans=0;
    scanf("%lld",&n);
    //ll root=sqrt(n);
    for(ll i=1;i<n;i++){
        if(n%i==0){
            ans++;
        }
    }
    printf("%lld\n",ans);
}
