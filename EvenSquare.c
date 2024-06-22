/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2){
        for(i=2;i<n;i=i+2){
            int x=pow(i,2);
            printf("%d^2 = %d\n",i,x);
        }
    }
    else{
        for(i=2;i<=n;i=i+2){
            int y=pow(i,2);
            printf("%d^2 = %d\n",i,y);
        }
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1 ; i<=x ; i++)
    {
        if(i%2==0)
        {
            printf("%d^%d = %d\n",i,2,i*i);
        }
    }
    return 0;
}

