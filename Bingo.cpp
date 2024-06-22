#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b;
    int x;
    while(1)
    {
        cin>>n>>b;
        if(n==0&&b==0)return 0;
        set<int>s;
        vector<int>v;
        for(int i=0; i<b; i++)
        {
            cin>>x;
            s.insert(x);
            v.push_back(x);
        }
        int sz=b-1;
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<b; j++)
            {
                s.insert(abs(v[j]-v[i]));
            }
        }
        if(s.size()==n+1)cout<<"Y\n";
        else cout<<"N\n";
    }
}
