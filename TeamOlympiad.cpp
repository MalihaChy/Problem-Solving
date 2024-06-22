#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    vector<int>v[3];
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)v[0].push_back(i);
        else if(x==2)v[1].push_back(i);
        else if(x==3)v[2].push_back(i);
    }
    int team = min(v[0].size(), min(v[1].size(), v[2].size()));
    cout<<team<<endl;
    for(int i=0;i<team;i++)cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
}
