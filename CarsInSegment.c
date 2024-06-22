#include<stdio.h>
int main()
{
    int T,i,N,Q;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&N,&Q);
        int ar[N],ar2[Q],j;
        for(j=0;j<N;j++)
            scanf("%d",&ar[j]);
        int k,m=0;
        for(k=0;k<Q;k++){
            int X,Y,t,cnt=0;
            scanf("%d%d%d",&X,&Y,&t);
            int l;
            for(l=0;l<N;l++){
                if(X<=(ar[l]+t)&&Y>=(ar[l]+t))
                    cnt++;
            }
            ar2[m]=cnt;
            m++;
        }
        printf("Case %d:\n",i);
        int n;
        for(n=0;n<Q;n++)
            printf("%d\n",ar2[n]);
    }
    return 0;
}
