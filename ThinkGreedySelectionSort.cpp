#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;t++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);
        int small,cnt=0;
        for(int i=0;i<n-1;i++)
        {
            small=i;
            for(int j=i+1;j<n;j++)
            {
                if(ar[j]<ar[i])
                    small=j;
            }
            //if(ar[small]!=ar[i]){
                swap(ar[small],ar[i]);
                cnt++;
            //}
        }
        printf("hell\n");
        for(int i=0;i<n;i++)
            printf("%d ",ar[i]);
        printf("Case %d: %d\n",tc,cnt);
    }
}
