#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mod;
        vector<int>v;
        int pos = 1;
        while(n)
        {
            mod = n%10;
            n = n/10;
            if(mod)v.push_back(mod*pos);
            pos *= 10;
        }
        int sz = v.size();
        cout<<sz<<endl<<v[0];
        for(int i=1;i<v.size();i++)cout<<" "<<v[i];
        cout<<endl;
    }
}
