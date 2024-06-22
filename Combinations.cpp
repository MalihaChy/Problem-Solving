#include<stdio.h>
main(){
    /*  @JUDGE_ID: 15774ZH  369  C++  "Combination"  */
    long n,m,i,j,t,c;
    double ans;
    int T,a=1;
    scanf("%d",&T);
    while(T--){
    scanf("%ld %ld",&n,&m);
    t=(n-m);
    if(t>m)c=m;
    else c=t;
    ans=1;

    if(c==0)ans=1;
    for(i=n,j=1;j<=c;i--,j++)
    ans=(ans*i)/j;

    printf("Case %d: %.0lf\n",a,ans);
    a++;
    }
    return 0;

}
