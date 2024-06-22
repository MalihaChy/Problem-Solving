#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int high=0,low=0;
        for(int i=0;i<n-1;i++){
            if(ar[i]<ar[i+1])
                high++;
            else{
                if(ar[i]>ar[i+1])
                    low++;
            }
        }
        printf("Case %d: %d %d\n",j,high,low);
    }
}
