#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,m,x,y;
    while(1)
    {
        cin>>k;
        if(k==0)break;
        cin>>n>>m;
        while(k--)
        {
            cin>>x>>y;
            if(x==n||y==m){
                cout<<"divisa\n";
                continue;
            }
            if(y>m)cout<<"N";
            else if(y<m)cout<<"S";
            if(x>n)cout<<"E\n";
            else if(x<n)cout<<"O\n";
        }
    }
}
