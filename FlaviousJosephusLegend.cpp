#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, k;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>n>>k;
        vector<int>v, tem;
        v.push_back(0);
        for(int j=1;j<=n;j++)
        {
            v.push_back(j);
        }
        while(v.size() != 2)
        {
            int sz = v.size();
            int st;
            for(int j=k; j<sz; j+=k)
            {
                v[j]=-100;
                st = j+1;
            }
            tem.push_back(0);
            for(int j=st; j<sz; j++)
            {
                if(v[j]!=-100)tem.push_back(v[j]);
            }
            for(int j=1; j<st; j++)
            {
                if(v[j]!=-100)tem.push_back(v[j]);
            }
            sz = tem.size();
            v.clear();
            for(int j=0;j<sz;j++)
            {
                v.push_back(tem[j]);
            }
            for(int j=0;j<sz;j++)
            {
                cout<<tem[j]<<" ";
            }
        }
    }
}

