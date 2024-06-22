#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        set<int>s;
        cin>>n;
        while(n--)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}
