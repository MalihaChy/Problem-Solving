#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vector< pair<int,string> >v;
        int ans=0;
        for(int j=0;j<10;j++)
        {
            cin>>s;
            cin>>n;
            v.push_back(make_pair(n,s));
            if(n>ans)
                ans=n;
        }
        printf("Case #%d:\n",i);
        int sz=v.size();
        for(int j=0;j<sz;j++)
        {
            if(v[j].first==ans)
                cout<<v[j].second<<endl;
        }
    }
}
