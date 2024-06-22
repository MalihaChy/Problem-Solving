#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        if(n&1){
            printf("%d\n",(n/2)+1);
        }
        else
            printf("%d\n",(n/(-2)));
    }
    return 0;
}
