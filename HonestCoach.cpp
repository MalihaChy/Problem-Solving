#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar, ar+n);
        int mn=10000;
        int sz = n-1;
        for(int i=0;i<sz;i++)
        {
            int x = ar[i+1]-ar[i];
            if(x<mn)mn=x;
        }
        cout<<mn<<endl;
    }
}
