#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    while(T--)
    {
        scanf("%d",&n);
        int ar[n];
        {
            int i;
            for(i=0; i<n; i++)
                scanf("%d",&ar[i]);
            for(i=0; i<n-1; i++)
            {
                ar[i+1]=ar[i]^ar[i+1];
            }
        }
        printf("%d\n",ar[n-1]);
    }
}
