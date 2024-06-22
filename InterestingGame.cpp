#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k,x;
    for(int j=1;j<=t;j++){
        cin>>n>>k>>x;
        int sum=(n*(n+1))/2;
        int sum2=0;
        for(int i=x,m=1;m<=k;m++,i++)
            sum2+=i;
        printf("Case %d: %d\n",j,sum-sum2);
    }
}
