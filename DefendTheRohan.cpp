#include<bits/stdc++.h>
using namespace std;

int n;
int ar[60][60];

void Floyd_Warshell()
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                ar[i][j]=min(ar[i][j],ar[i][k]+ar[k][j]);
            }
        }
    }
}

int main()
{
    int t,r,s,d;
    cin>>t;
    for(int case_no=1;case_no<=t;case_no++)
    {
        cin>>n;
        //int ar[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cin>>ar[i][j];
        }
        Floyd_Warshell();
        cin>>r;
        int sum=0;
        while(r--)
        {
            cin>>s>>d;
            sum+=ar[s][d];
        }
        printf("Case #%d: %d\n",case_no,sum);
    }
}
