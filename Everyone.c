#include<stdio.h>
int main()
{
    int T,i,j,k,n,count;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        count=0;
        int ar[n];
        for(j=0;j<n;j++)
            scanf("%d",&ar[j]);
        if(ar[0]<ar[1]){
        for(k=0;k<n-1;k++){
            if(ar[k]<ar[k+1])
                count++;
            else{
                count=0;
                break;
            }
        }
        }
        if(ar[0]>ar[1]){
            for(k=0;k<n-1;k++){
            if(ar[k]>ar[k+1])
                count++;
            else{
                count=0;
                break;
            }
        }
        }
        if(count==0)
            printf("Case %d: NO\n",i);
        else
            printf("Case %d: YES\n",i);
    }
    return 0;
}
