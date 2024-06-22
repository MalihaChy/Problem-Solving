#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    vector<int>v;
    cin>>n;
    long long sum=0;
    while(n--)
    {
        cin>>x;
        if(x&1)
            v.push_back(x);
        else
            sum+=x;
    }
    x=v.size();
    if(x&1){
        sort(v.begin(),v.end());
        for(int i=1;i<x;i++)
            sum+=v[i];
    }
    else{
        for(int i=0;i<x;i++)
            sum+=v[i];
    }
    cout<<sum<<endl;
}
