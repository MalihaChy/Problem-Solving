#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    queue<int>a;
    stack<int>b;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        a.push(x);
        b.push(x);
    }
    while(!a.empty() && !b.empty())
    {
        if(a.front()<b.top())
        {
            v.push_back(2);
            a.pop();
        }
        else if(a.front()>b.top())
        {
            v.push_back(1);
            b.pop();
        }
        else
        {
            v.push_back(0);
            a.pop();
            b.pop();
        }
    }
    cout<<v[0];
    x = v.size();
    for(int i=1;i<x;i++)cout<<" "<<v[i];
    cout<<endl;
}
