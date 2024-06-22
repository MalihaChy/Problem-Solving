#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    vector< pair<int,int> >v;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i].first<s)
            s+=v[i].second;
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
