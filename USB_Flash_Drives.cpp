#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int cnt=0,sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=ar[i];
        if(sum<m)
            cnt++;
        if(sum>=m)
        {
            cout<<cnt+1<<endl;
            break;
        }
    }
}
