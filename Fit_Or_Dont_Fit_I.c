#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(b>a)
            printf("nao encaixa\n");
        else
        {
            char A[100],B[100];
            itoa(a,A,10);
            itoa(b,B,10);
            int length_a=strlen(A);
            int length_b=strlen(B);
            int flag=0,i,j;
            for(i=length_b-1,j=length_a-1; i>=0; i--,j--)
            {
                if(A[j]!=B[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                printf("nao encaixa\n");
            else
                printf("encaixa\n");
        }
    }
}

