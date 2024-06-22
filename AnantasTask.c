#include<stdio.h>
#include<math.h>
int main()
{
    int A,N;
    while(scanf("%d%d",&A,&N)!=EOF){
        double M=pow(A,0.5);
        printf("%.%dflf\n",N,M);
    }
    return 0;
}
