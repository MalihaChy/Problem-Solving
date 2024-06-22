#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)cin>>ar[i];
        sort(ar, ar+n);
        int sz = n-1;
        set<double>s;
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<n; j++)s.insert(0.5*abs(ar[j]-ar[i]));
        }
        cout<<s.size()<<endl;
    }
}
