#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1];
        memset(ar, -1, sizeof(ar));
        vector<int>v;
        int cnt = n*2;
        while(cnt--)
        {
            cin>>x;
            if(ar[x]==-1)
            {
                v.push_back(x);
                ar[x]=100;
            }
        }
        cout<<v[0];
        for(int i=1;i<n;i++)cout<<" "<<v[i];
        cout<<endl;
    }
}
