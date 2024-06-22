#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ar[n+1][n+1];
    vector<int>r[n+1],c[n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            cin>>ar[i][j];
            if(ar[i][j]=='C')
            {
                r[i].push_back(j);
                c[j].push_back(i);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int sz=r[i].size();
        if(sz>1)
            ans=ans+(sz*(sz-1))/2;
        sz=c[i].size();
        if(sz>1)
            ans=ans+(sz*(sz-1))/2;

    }
    cout<<ans<<endl;
}
