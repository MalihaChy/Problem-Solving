#include<stdio.h>
int main()
{
    int k,r,i,j;
    scanf("%d%d",&k,&r);
    for(i=1;;i++){
        j=(k*i)%10;
        if(j==r||j==0){
            printf("%d",i);
            return 0;
        }
    }
}