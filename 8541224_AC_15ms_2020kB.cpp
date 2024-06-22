#include<stdio.h>
int main()
{
    long long n,sum;
    scanf("%lld",&n);
    if(!(n%2)){
        sum=n/2;
        printf("%lld",sum);
        return 0;
    }
    else
        sum=((n-1)/2)-n;
        printf("%lld",sum);
        return 0;
}