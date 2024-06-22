#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector< pair<int,int> >v;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int sz=n-2;
    for(int i=0;i<=sz;i++)
    {
        if(v[i].second>v[i+1].second)
        {
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
}
