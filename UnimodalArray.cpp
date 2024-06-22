#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    ar[0]=0;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    int cnt=0,i;
    for(i=1;i<=n;i++){
        if(ar[i-1]<ar[i])
            cnt++;
        else
            break;
    }
    for(;i<=n;i++){
        if(ar[i-1]==ar[i])
            cnt++;
        else
            break;
    }
    for(;i<=n;i++){
        if(ar[i-1]>ar[i])
            cnt++;
        else
            break;
    }
    if(cnt==n||n==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
