#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>x;
        if(x<=7)cout<<1<<endl;
        else cout<<(x/7)+1<<endl;
    }
}
