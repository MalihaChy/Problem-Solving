#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n],ans[n];
    memset(ans,0,sizeof(ans));
    int cnt=1,j=0;
    cin>>ar[0];
    int tem=ar[0];
    int flag=1;
    for(int i=1; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]>=tem)
        {
            tem=ar[i];
            cnt++;
        }
        else
        {
            ans[j]=cnt;
            j++;
            tem=ar[i];
            flag=0;
            cnt=1;
        }
    }
    if(flag)
    {
        cout<<cnt<<endl;
    }
    else
    {
        sort(ans,ans+n);
        cout<<ans[n-1]<<endl;
    }
}
//6
//2 2 1 3 4 1
