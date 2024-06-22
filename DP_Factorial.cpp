#include<bits/stdc++.h>
using namespace std;

int dp[10];

int F(int n)
{
    if(n==0||n==1)return 1;
    else if(dp[n]==0)return dp[n]=F(n-1)*n;
    else return dp[n];
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        cout<<F(n)<<endl;
        for(int i=0;i<9;i++)
            cout<<dp[i]<<" ";
    }
}
