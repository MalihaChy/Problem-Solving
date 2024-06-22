#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector< pair<int,int> >p;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        p.push_back(make_pair(x,i));
    }
    sort(p.begin(),p.end());
    int cnt=0,sum=0;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        sum+=p[i].first;
        if(sum<=k)
        {
            cnt++;
            v.push_back(p[i].second+1);
        }
    }
    cout<<cnt<<endl;
    int sz=v.size();
    if(sz!=0)
        cout<<v[0];
    for(int i=1;i<sz;i++)
        cout<<" "<<v[i];
    cout<<endl;
}
