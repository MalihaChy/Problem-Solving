#include<stdio.h>
int main ()
{
    int a,b;
    ("%d %d\n",&a,&b);
    while(scanf("%d %d",&a,&b)!=EOF)
    printf("%d\n",a+b);
    return 0;

}