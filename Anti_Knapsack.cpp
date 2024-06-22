#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>v;
        if(n>k)
        {
            int sz = n-k;
            for(int i=1;i<=sz;i++)v.push_back(k+i);
        }
        int sz = k/2;
        if(k&1)for(int i=sz+1;i<k;i++)v.push_back(i);
        else{for(int i=sz;i<k;i++)v.push_back(i);}
        sz = v.size();
        cout<<sz<<endl;
        if(sz>0)
        {
            cout<<v[0];
            for(int i =1; i<sz ; i++)
                cout<<" "<<v[i];
            cout<<endl;
        }
    }
}
