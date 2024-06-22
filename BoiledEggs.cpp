#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,q,sum,cnt;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>p>>q;
        int ar[n];
        sum=0,cnt=0;
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
            sum+=ar[j];
            if(sum<=q&&j<p)
                cnt++;
        }
        printf("Case %d: %d\n",i,cnt);
    }
}
