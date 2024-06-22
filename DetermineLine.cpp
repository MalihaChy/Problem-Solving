#include<bits/stdc++.h>
using namespace std;

int ar[101];

int main()
{
    int n;
    cin>>n;
    int r,x;
    while(n--)
    {
        cin>>r;
        while(r--)
        {
            cin>>x;
            ar[x]++;
        }
    }
    x=-10000;
    for(int i=0;i<101;i++)
    {
        if(ar[i]!=0)
        {
            x=max(x,ar[i]);
        }
    }
    for(int i=0;i<101;i++)
    {
        if(ar[i]==x)
            cout<<i<<" ";
    }
    cout<<endl;
}
