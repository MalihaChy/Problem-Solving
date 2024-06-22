#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int M;
    scanf("%d",&M);
    int i,ar[M];
    long long sum=0;
    for(i=0;i<M;i++){
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    if(N&1){
        printf("%lld\n",(((1+N)*(N/2))+(N/2)+1)-sum);
        return 0;
    }
    else{
        printf("%lld\n",((1+N)*(N/2))-sum);
        return 0;
    }
}
