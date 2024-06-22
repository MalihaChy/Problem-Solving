#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum[n+1];
    memset(sum,0,sizeof(sum));
    for(int i=1;i<=n;i++){
        cin>>sum[i];
        sum[i]+=sum[i-1];
    }
    int m;
    cin>>m;
    int ar[m];
    for(int i=0;i<m;i++)
        cin>>ar[i];
    for(int i=0;i<m;i++){
        for(int j=1;j<=n;j++){
            if(ar[i]<=sum[j])
            {
                ar[i]=j;
                break;
            }
        }
    }
    for(int i=0;i<m;i++)
        cout<<ar[i]<<endl;
}
