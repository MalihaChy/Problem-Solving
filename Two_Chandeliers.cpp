#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, m, cnt=0, irritate=0;
    cin>>n>>m>>k;
    int a[n], b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0, j=0;
    while(irritate!=k)
    {
        if(i==n)i=0;
        if(j==m)j=0;
        if(a[i]!=b[j])
        {
            irritate++;
        }
        i++;
        j++;
        cnt++;
    }
    cout<<cnt<<endl;
}
