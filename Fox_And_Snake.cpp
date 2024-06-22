#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string a, b, c;
    for(int i=2;i<=m;i++)
    {
        a+='#';
        b+='.';
        c+='.';
    }
    a+='#';
    b+='#';
    c = '#'+c;
    int flag = 1;
    for(int i=1;i<=n;i++)
    {
        if(i&1)cout<<a<<endl;
        else if(flag==1)
        {
            cout<<b<<endl;
            flag = 2;
        }
        else if(flag==2)
        {
            cout<<c<<endl;
            flag = 1;
        }
    }
}
