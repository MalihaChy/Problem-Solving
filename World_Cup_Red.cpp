#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n;
    int ar[n+1];
    ar[0]=-100;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]<ar[i-1])
            d=ar[i];
    }
    for(int i=1;i<=n;i++)
        ar[i]=ar[i]-d;
    int cnt=(1+d)%(n+1);
    while(1)
    {
        for(int i=1; i<=n; i++)
            ar[i]=ar[i]-1;
        if(cnt==n)
            cnt=1;
        else
            cnt++;
        if(ar[cnt]<=0)
        {
            cout<<cnt<<endl;
            break;
        }
    }
}
