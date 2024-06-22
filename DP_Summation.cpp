#include<bits/stdc++.h>
using namespace std;

int dp[100];

int Sum(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else if(dp[n]!=0)return dp[n];
    else{
        return dp[n]=n+Sum(n-1);
    }
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        cout<<Sum(n)<<endl;
    }
}
