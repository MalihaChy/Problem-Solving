#include<stdio.h>
int main()
{
    int T;long N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        if(N%2)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}