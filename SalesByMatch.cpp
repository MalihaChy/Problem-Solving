#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar, ar+n);
    int sz = n-1;
    for(int i=0;i<sz;i++)
    {
        if(ar[i]==ar[i+1])
        {
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
}
