#include<bits/stdc++.h>
using namespace std;

long long ans=1;

int main()
{
    int n;
    while(1){
        cin>>n;
        ans=1;
        for(int i=1;i<=n;i++)
            ans=((ans%97)*(i%97))%97;
            //ans*=i;
        cout<<ans<<endl;
    }
}
