#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1],ans[n+1];
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==ar[j])
                ans[i]=j;
        }
    }
    cout<<ans[1];
    for(int i=2;i<=n;i++)
        cout<<" "<<ans[i];
    cout<<endl;
}
