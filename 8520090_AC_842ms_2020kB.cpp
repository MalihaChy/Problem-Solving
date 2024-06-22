#include<stdio.h>
int main()
{
    int t,s,x,i;
    scanf("%d%d%d",&t,&s,&x);
    if(t==x){
        printf("YES");
        return 0;
    }
    for(i=1;i<=x;i++){
        if(t+i*s==x){
            printf("YES");
            return 0;
        }
        if(t+i*s+1==x){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}