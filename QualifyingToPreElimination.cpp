#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int x;
        vector<int>v;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        x=v[k-1];
        for(int i=k;i<n;i++)
        {
            if(v[i]==x)
                k++;
        }
        cout<<k<<endl;
    }
}
