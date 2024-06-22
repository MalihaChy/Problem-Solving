#include<bits/stdc++.h>
using namespace std;

long long dp[35][1000];

long long nCr(int n,int k)
{
    if(n==k)
        dp[n][k]=1;
    if(k==1)
        dp[n][k]=n;
    if(k==0)
        dp[n][k]=1;
    if(dp[n][k]==0)
        dp[n][k]=nCr(n-1,k)+nCr(n-1,k-1);
    return dp[n][k];
}

long long Factorial(int k)
{
    long long factorial=1;
    for(int i=1; i<=k; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int t,n,k;
    cin>>t;
    //memset(dp,-1,sizeof(dp));
    for(int i=1; i<=t; i++)
    {
        cin>>n>>k;
        if(n<k)
            printf("Case %d: 0\n",i);
        else
        {
            long long ans=nCr(n,k);
            ans=ans*ans*Factorial(k);
            printf("Case %d: %lld\n",i,ans);
        }
    }
}
