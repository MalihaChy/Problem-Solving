#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int sum = max(max(max(w, x),y),z);
    if(sum == w)cout<<sum-x<<" "<<sum-y<<" "<<sum-z<<endl;
    else if(sum == x)cout<<sum-w<<" "<<sum-y<<" "<<sum-z<<endl;
    else if(sum == y)cout<<sum-x<<" "<<sum-w<<" "<<sum-z<<endl;
    else if(sum == z)cout<<sum-x<<" "<<sum-y<<" "<<sum-w<<endl;
}
