#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++){
        if(ar[i]>=max)
            max=ar[i];
    }
    printf("%d\n",max);
    return 0;
}
