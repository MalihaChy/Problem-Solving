#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int>v;
    cin>>n>>m;
    int ar[m+1];
    ar[0]=0;
    for(int i=1;i<=m;i++)
        cin>>ar[i];
    sort(ar,ar+m+1);
    m-=(n-1);
    for(int i=1;i<=m;i++)
    {
        v.push_back(ar[i+n-1]-ar[i]);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}
