#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n], ans[n-1];
    for(int i=0;i<n;i++)cin>>ar[i];

    ans[n-1] = ar[n-1];
    int mx = ans[n-1];
    for(int i=n-1;i>0;i--)
    {
        if(ar[i-1]<ar[i])ans[i-1]=(ans[i]^ar[i-1]);
        else ans[i-1]=ar[i-1];
        mx = max(mx, ans[i-1]);
    }
    cout<<mx<<endl;
}
