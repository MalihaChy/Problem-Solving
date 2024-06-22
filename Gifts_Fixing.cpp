#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n], b[n];
        int a_min=INT_MAX, b_min=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a_min>a[i])a_min=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b_min>b[i])b_min=b[i];
        }
        long long moves=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>a_min || b[i]>b_min)moves+=(max(a[i]-a_min, b[i]-b_min));
        }
        cout<<moves<<endl;
    }
}
