#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, x, sz;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        if(k==0)cout<<n<<endl;
        else
        {
            while(k--)
            {
                sort(v.begin(), v.end());
                sz = v.size();
                int mx = v[sz-1];
                int mex = -1;
                for(int i=0; i<sz; i++)
                {
                    if(v[i]!=i)
                    {
                        mex = i;
                        break;
                    }
                }
                if(mex==-1)mex=sz;
                v.push_back(ceil((mx+mex)/2.0));
            }
            sz = v.size();
            set<int>s;
            for(int i=0; i<sz; i++)s.insert(v[i]);
            cout<<s.size()<<endl;
        }
    }
}
