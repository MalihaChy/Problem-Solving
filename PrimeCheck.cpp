#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,flag;
    long long n;
    scanf("%d",&T);
    while(T--)
    {
        flag=0;
        scanf("%lld",&n);
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                printf("%lld is not a prime\n",n);
                flag=1;

                break;
            }
        }
        if(flag==0)
            printf("%lld is a prime\n",n);
    }
}
