#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n;
        cin>>n;
        int ar[n+1];
        for(int j=1;j<=n;j++)
            cin>>ar[j];
        if(n&1)
            printf("Case %d: %d\n",i,ar[(n/2)+1]);
        else
            printf("Case %d: %d\n",i,ar[n/2]);
    }
}
