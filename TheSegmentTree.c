#include<stdio.h>
int main()
{
    long long N;
    scanf("%lld",&N);
    if(N&1)
        printf("%lld\n",(N-1)/2);
    else
        printf("%lld\n",N/2);
    return 0;
}
