#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int N,L;
        scanf("%d%d",&N,&L);
        int total[N],sum=0;
        for(int j=0; j<N; j++)
        {
            scanf("%d",&total[j]);
            sum+=total[j];
        }
        int limit[N];
        for(int j=0; j<N; j++)
        {
            scanf("%d",&limit[j]);
        }
        if(sum>L)
        {
            printf("Case %d: No\n",i);
        }
        else
        {
            int j;
            for(j=0; j<N; j++)
            {
                if(limit[j]<total[j])
                {
                    printf("Case %d: No\n",i);
                    break;
                }
            }
            if(j==N)
                printf("Case %d: Yes\n",i);
        }
    }
}
