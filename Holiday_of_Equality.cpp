#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt, mx = -1;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>cnt;
        v.push_back(cnt);
        if(cnt>mx)mx=cnt;
    }
    cnt = 0;
    for(int i=0;i<n;i++)cnt+=(mx-v[i]);
    cout<<cnt<<endl;
}
