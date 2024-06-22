#include<bits/stdc++.h>
using namespace std;

int dp[10008][10008];

int nCr(int n,int k)
{
    if(n==k)
        dp[n][k]=1;
    if(k==1)
        dp[n][k]=n%1000003;
    if(k==0)
        dp[n][k]=1;
    if(dp[n][k]==0)
        dp[n][k]=(nCr(n-1,k)%1000003+nCr(n-1,k-1)%1000003)%1000003;
    return dp[n][k];
}

int main()
{
    int t,n,k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        printf("Case %d: %d\n",i,nCr(n,k)%1000003);
    }
}
