#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    set<int>s;
    for(int i=1;i<=4;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size()<<endl;
}
