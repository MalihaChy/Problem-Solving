#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int F(int n)
{
    if(n==1)return dp[1];
    else if(n==0)return dp[0];
    else if(dp[n]==0)return dp[n]=F(n-1)+dp[n-2];
}

int main()
{
    for(int i=0;i<30;i++)
        dp[i]=23;
    dp[1]=1;
    int n;
    while(1)
    {
        cin>>n;
        cout<<F(n)<<endl;
        for(int i=0;i<30;i++)
            cout<<dp[i]<<" ";
    }
}
