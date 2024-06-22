#include<bits/stdc++.h>
using namespace std;

int dp[100];

int F(int n)
{
    if(n==1)return dp[1];
    else if(n==0)return dp[0];
    else if(dp[n]!=0)return dp[n];
    else{
        dp[n]=F(n-1)+F(n-2);
        return dp[n];
    }
}

int main()
{
    int n;
    dp[1]=1;
    while(1)
    {
        cin>>n;
        cout<<F(n)<<endl;
    }
}
