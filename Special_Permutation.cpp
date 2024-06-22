#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)
        {
            vector<int>v;
            for(int i=n;i>=1;i--)v.push_back(i);
            swap(v[0], v[n/2]);
            cout<<v[0];
            for(int i=1;i<n;i++)cout<<" "<<v[i];
            cout<<endl;
        }
        else
        {
            cout<<n;
            for(int i=n-1;i>=1;i--)cout<<" "<<i;
            cout<<endl;
        }
    }
}
