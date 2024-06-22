#include<bits/stdc++.h>
using namespace std;

int fact[1000],dp[1005][1005];

int nCr(int n,int r)
{
    if(n==0)
        return 0;
    if(n==r||r==0)
        return 1;
    if(r==1)
        return n;
    else
        return nCr(n-1,r)+nCr(n-1,r-1);
}

void Factorial()
{
    fact[0]=1;
    for(int i=1;i<=1000;i++)
        fact[i]=(fact[i-1]*i)%10056;
}

int main()
{
    int t;
    cin>>t;
    int n;
    Factorial();
    for(int i=1;i<=t;i++){
        cin>>n;
        int sum=fact[n];
        for(int k=1;k<=n;k++)
        sum+=( nCr(n,k) * (nCr(n-k,k+1)) );
        //for(int r=1;;)
        //sum+=nCr(n,r);
        cout<<sum<<endl;
    }
}
