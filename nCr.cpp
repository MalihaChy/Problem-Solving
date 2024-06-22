#include<bits/stdc++.h>
using namespace std;

long long dp[30][900];

long long nCr(int n,int r)
{
    if(n==r)
        dp[n][r]=1;
    if(r==1)
        dp[n][r]=n;
    if(r==0)
        dp[n][r]=1;
    if(dp[n][r]==0)
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    return dp[n][r];
}
int main()
{
    int n,r;
    while(1)
    {
        cin>>n>>r;
        if(n<r)
            cout<<0<<endl;
        else
            cout<<nCr(n,r)<<endl;
    }
}



//////////   Blog   ////////////////

#include <stdio.h>

#define i64 unsigned long long

i64 dp[66][33];

i64 nCr(int n, int r)
{
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = (i64)n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{
    int n, r;
    while(scanf("%d %d",&n,&r)==2)
    {
        r = (r<n-r)? r : n-r;
        printf("%llu\n",nCr(n,r));
    }
    return 0;
}
