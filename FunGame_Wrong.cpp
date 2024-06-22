#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    deque<int>dq;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        dq.push_back(x);
    }
    while(!dq.empty())
    {
        if(dq.back()>dq.front())
        {
            v.push_back(2);
            dq.pop_front();
        }
        else if(dq.back()<dq.front())
        {
            v.push_back(1);
            dq.pop_back();
        }
        else
        {
            v.push_back(0);
            dq.pop_front();
            if(!dq.empty())dq.pop_back();
        }
    }
    x = v.size();
    cout<<v[0];
    for(int i=1;i<x;i++)cout<<" "<<v[i];
    cout<<endl;
}
