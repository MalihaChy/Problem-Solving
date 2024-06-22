#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    long u,a,s;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%ld%ld%ld",&u,&a,&s);
        double A=u*u+2*a*s;
        double B=pow(A,0.5);
        double t1=(-u+B)/a;
        double t2=(-u-B)/a;
        if(t1>=0)
            printf("Case %d: %.6lf\n",i,t1);
        else
            printf("Case %d: %.6lf\n",i,t1);
    }
    return 0;
}
