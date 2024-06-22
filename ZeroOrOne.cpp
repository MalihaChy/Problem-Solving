#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b&&b==c)
            cout<<"*\n";
        else
        {
            if(a==b &&c!=a)
                cout<<"C\n";
            else
            {
                if(b==c&&b!=a)
                    cout<<"A\n";
                else
                {
                    if(a==c&&a!=b)
                        cout<<"B\n";
                }
            }
        }
    }
}
