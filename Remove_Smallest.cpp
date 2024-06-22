#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int sz = n-1;
        int flag = 0;
        for(int i=0; i<sz; i++)
        {
            if(v[i+1]-v[i]>1)
            {
                flag = 1;
                break;
            }
        }
        if(flag)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
