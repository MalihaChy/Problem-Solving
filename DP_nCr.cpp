#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int nCr(int n,int r)
{
    if(r==n)return 1;
    if(r==1)return n;
    if(dp[n][r]==-1)return dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    if(dp[n][r]!=-1)return dp[n][r];
}

int main()
{
    int n,r;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
            dp[i][j]=-1;
    }
    while(1)
    {
        cin>>n>>r;
        cout<<nCr(n,r)<<endl;
    }
}
