#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            ar[i][j]+=ar[i-1][j];
    }
    int ans=0;
    for()
}
