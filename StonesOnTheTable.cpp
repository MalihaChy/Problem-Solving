#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    char ar[n];
    cin>>ar[0];
    for(int i=1;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==ar[i-1])
            cnt++;
    }
    cout<<cnt;
}
