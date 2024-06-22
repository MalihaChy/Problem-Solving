#include<stdio.h>
int main()
{
    int n,k,i,K;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(i=0;i<n;scanf("%d",&ar[i]),i++);
    if(ar[0]<=0)
        printf("0\n");
    else{
        K=k-1;
        while(ar[K]==ar[k]){
            k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
