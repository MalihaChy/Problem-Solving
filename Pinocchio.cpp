#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int ar[n];
        for(int j=0;j<n;j++)
            cin>>ar[j];
        int cnt=0;
        for(int j=0;j<n-1;j++){
            if(ar[j]<ar[j+1])
                cnt++;
        }
        printf("Case %d: %d\n",i,cnt);
    }
}
