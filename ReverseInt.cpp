#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x = 48392;
    vector<int>v;
    while(x)
    {
        v.push_back(x%10);
        x = x/10;

    }
    int sz = v.size();
    int res = 0;
    int tenth = 1;
    for(int i=sz-1;i>=0;i--)
    {
        res += (v[i]*tenth);
        tenth *= 10;
    }
    cout<<res<<endl;
    x = 128;
    if(x&x-1)cout<<"Not power of 2\n";
    else cout<<"Power of 2\n";
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5-i;j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<"*";
        cout<<endl;
    }
}
