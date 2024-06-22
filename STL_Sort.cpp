#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< pair<int,int> >v;
    for(int i=10;i>0;i--)
    {
        v.push_back(make_pair(10,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<10;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
