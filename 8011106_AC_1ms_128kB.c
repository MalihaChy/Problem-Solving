#include<stdio.h>
int main()
{
    long int A,B,C,D,a1,a2;
    scanf("%ld%ld%ld%ld",&A,&B,&C,&D);
    a1=A*B;a2=C*D;
    if(a1>a2)
    printf("%ld",a1);
    else{
        if(a2>a1)
        printf("%ld",a2);
        else
        printf("%ld",a1);
    }
    return 0;
}