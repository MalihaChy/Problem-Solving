#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,sum=0;
        cin>>n;
        int ar[n];
        for(int j=0;j<n;j++){
            cin>>ar[j];
            if(ar[j]>0)
                sum+=ar[j];
        }
        printf("Case %d: %d\n",i,sum);
    }
}
