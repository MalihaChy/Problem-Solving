#include<stdio.h>
int main()
{
    int T,time;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&time);
        if(time<24)
            printf("%d\n",time+1);
        else
            printf("1\n");
    }
    return 0;
}
