#include<stdio.h>
int main()
{
    int ar[10],i,x;
    for(i=0;i<10;i++)
        scanf("%d",&ar[i]);
    scanf("%d",&x);
    for(i=0;i<10;i++){
        if(x==ar[i]){
            printf("%d is found!\n",x);
            break;
        }
    }
    if(i==10)
        printf("%d is not found!\n",x);
}
