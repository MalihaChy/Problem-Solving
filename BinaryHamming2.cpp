#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("hamming.in","r",stdin);
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        int a_zero=0,a_one=0,b_zero=0,b_one=0;
        //vector<char>v[n];
        string a,b;
        cin>>a>>b;
        for(int i=0,j=0;i<n;i++)
        {
            if(a[i]!=b[i])
                ans++;
            else{
                if(a[i]=='0')a_zero++;
                if(a[i]=='1')a_one++;
                if(b[i]=='0')b_zero++;
                if(b[i]=='1')b_one++;
                //v[j].push_back(a[i]);
                //v[j].push_back(b[i]);
                //j++;
            }
        }
        ans+=min(a_zero,b_one);
        ans+=min(a_one,b_zero);
        cout<<ans<<endl;
    }
}
