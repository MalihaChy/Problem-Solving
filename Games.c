#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int h[n],g[n];
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
        scanf("%d",&g[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(h[i]==g[j])
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
