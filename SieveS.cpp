#include<bits/stdc++.h>
using namespace std;


int main()
{

    int T;
    long long n,i;
    scanf("%d",&T);

    while(T--){
        int flag=0;
        scanf("%lld",&n);
        if(!(n&1) || n==1)
        {
            printf("%lld is not a prime\n",n);
        }
        else{
            for(i=3;i*i<=n;i+=2){
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
}

