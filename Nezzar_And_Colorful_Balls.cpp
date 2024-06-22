#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        while(n--)
        {
            cin>>x;
            int flag = 0;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]<x)
                {
                    v[i]=x;
                    flag = 1;
                    break;
                }
            }
            if(flag==0)v.push_back(x);
        }
        cout<<v.size()<<endl;
    }
}
