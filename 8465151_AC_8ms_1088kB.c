#include<stdio.h>
int main()
{
    int T,N,sum,dust,i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%*c%d",&N);
        for(j=1,sum=0;j<=N;j++){
            scanf("%d",&dust);
            if(dust>=0)
                sum+=dust;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}