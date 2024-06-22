#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, John, Mary, x;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        John=0;
        Mary=0;
        while(n--)
        {
            cin>>x;
            if(x==0)Mary++;
            else John++;
        }
        cout<<"Mary won "<<Mary<<" times and John won "<<John<<" times\n";
    }
}
