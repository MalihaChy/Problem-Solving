#include<stdio.h>
int main()
{
    int w,W;
    scanf("%d",&w);
    if(w==2||w==1)
        printf("NO\n");
    else{
        W=w-2;
        if(W%2)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
