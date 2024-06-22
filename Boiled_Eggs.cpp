#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int n,w,c;
    for(int j=1; j<=T; j++)
    {
        cin>>n>>w>>c;
        int ar[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(cnt+1<=w && sum+ar[i]<=c)
            {
                cnt++;
                sum+=ar[i];
            }
            if(sum>=c||cnt>=w)
                break;
        }
        printf("Case %d: %d\n",j,cnt);
    }
}
