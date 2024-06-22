#include<bits/stdc++.h>
using namespace std;

int main()
{
    long x,r=1;
    scanf("%ld",&x);
    long ans=0;

    for(int i=5;i>=1;i--){

        ans+=(x/i);
        r=x%i;
        x=r;

        if(x==0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }

}
