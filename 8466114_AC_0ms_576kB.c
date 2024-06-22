#include<stdio.h>
int main()
{
    int N,a,b,c,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a<c&&b<c&&a*a+b*b==c*c)
            printf("YES\n");
        else{
            if(a<b&&c<b&&a*a+c*c==b*b)
                printf("YES\n");
            else{
                if(b<a&&c<a&&b*b+c*c==a*a)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}