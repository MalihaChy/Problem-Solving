#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&1)
    {
        cout<<(1+((n*n)/2))<<endl;
        bool a=true;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(a)
                {
                    cout<<"C";
                    a=false;
                }
                else
                {
                    cout<<".";
                    a=true;
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<(n*n)/2<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n/2; j++)
            {
                if(i&1)
                    cout<<"C.";
                else
                    cout<<".C";
            }
            cout<<endl;
        }
    }
}
