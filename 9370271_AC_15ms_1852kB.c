#include<stdio.h>
int main()
{
    long long N;
    scanf("%lld",&N);
    if(N&1){
        printf("%lld\n",((1+N)*(N/2)+((1+N)/2))-(N-1));
        return 0;
    }
    if(!(N&1)){
        printf("%lld\n",((N+1)*(N/2))-(N-1));
        return 0;
    }
}
