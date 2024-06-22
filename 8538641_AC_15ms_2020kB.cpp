#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int f=x/5;
    if(x%5)
        printf("%d",f+1);
    else
        printf("%d",f);
    return 0;
}