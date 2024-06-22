#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=1;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int ar[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sum=sum/n;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]>sum)
                cnt+=(ar[i]-sum);
        }
        printf("Set #%d\n",j++);
        printf("The minimum number of moves is %d.\n\n",cnt);
    }
}
