#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    int cnt=0;
    cin>>n>>k;
    int ar[n];

    for(int i=0; i<n; i++)
        cin>>ar[i];
    for(int i=0; i<n; i++)
    {
        if(ar[i]<=k)
            cnt++;
        else
            break;
    }
    if(cnt!=n)
    {
        for(int i=n-1; i>=0; i--)
        {
            if(k>=ar[i])
                cnt++;
            else
                break;
        }
    }
    cout<<cnt<<endl;
}

